#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "nmeaparser.h"

NMEAParser::NMEAParser()
{
    NMEASatelliteList *ptr;
    ptr = _satellites;

    for (int i = 0; i < 12; i++) {
        ptr = (NMEASatelliteList *)malloc(sizeof(NMEASatelliteList));
        ptr = ptr->next();
    }

    _latitude = 0;
    _longitude = 0;
    _altitude = 0;
    _geoidHeight = 0;
    _hdop = 0;
    _vdop = 0;
    _dop = 0;
    _time = 0;
    _utcHours = 0;
    _utcMinutes = 0;
    _utcSeconds = 0;
    _numSatellites = 0;
    _quality = 0;
    _fixMode = 0x00;
    _fixType = 0;
}

void NMEAParser::parse(const char *data)
{
    char sentence_type[6];

    if (data[0] == '$') {
        memcpy(&sentence_type, data+1, 5);
        sentence_type[5] = 0x00;

        if (0 == strcmp(sentence_type, "GPGGA")) {
            parseGGA(data);
        }
    }
}

/**
 * QGPSDevice::parseGGA()
 *
 * Parses a GPGGA string that contains fix information, such as
 * latitude, longitude, etc.
 *
 * The format of the GPGGA String is as follows:
 *
 *  $GPGGA,123519,4807.038,N,01131.000,E,1,08,0.9,545.4,M,46.9,M,,*47
 *  |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
 *  01234567890123456789012345678901234567890123456789012345678901234
 *  |         |         |         |         |         |         |
 *  0         10        20        30        40        50        60
 *
 *  GPGGA       -   Global Positioning System Fix Data
 *  123519      -   Fix taken at 12:35:19 UTC
 *  4807.038,N  -   Latitude 48 deg 07.038' N
 *  01131.000,E -   Longitude 11 deg 31.000' E
 *  1           -   Fix quality:
 *                      0 = Invalid
 *                      1 = GPS fix (SPS)
 *                      2 = DGPS fix
 *                      3 = PPS fix
 *                      4 = Real time kinematic
 *                      5 = double RTK
 *                      6 = Estimated (dead reckoning)
 *                      7 = Manual input mode
 *                      8 = Simulation mode
 *  08          -   Number of satellites being tracked
 *  0.9         -   Horizontal dissolution of precision
 *  545.4,M     -   Altitude (meters) above sea level
 *  46.9,M      -   Height of geoid (sea level) above WGS84 ellipsoid
 *  (empty)     -   Seconds since last DGPS update
 *  (empty)     -   DGPS station ID number
 *  *47         -   Checksum, begins with *
 *
 * @param char ggaString    The full NMEA GPGGA string, starting with
 *                          the $ and ending with the checksum
 */
void NMEAParser::parseGGA(const char *data)
{
    int		j, k;
    char	buffer[32];

    j = 7;
    k = 0;

    buffer[0] = data[j++];
    buffer[1] = data[j++];
    buffer[2] = 0x00;

    _utcHours = atoi(buffer);

    buffer[0] = data[j++];
    buffer[1] = data[j++];
    buffer[2] = 0x00;

    _utcMinutes = atoi(buffer);

    k = 0;
    while (data[j] != 0x2C) {
        buffer[k++] = data[j++];
    }
    buffer[k] = 0x00;
    _utcSeconds = atoi(buffer);

    j++;
    k = 0;

    //
    // get latitude, and then N or S
    //
    while (data[j] != 0x2C) {
        buffer[k] = data[j];
        j++;
        k++;
    }

    //
    // convert DDMM.mm into decimal degrees
    //
    buffer[k] = 0x00;
    _latitude = atof(buffer);
    int lat_deg = floor(_latitude / 100);
    double lat_min = _latitude - (lat_deg * 100);
    _latitude = lat_deg + (lat_min / 60);

    j++;

    if (data[j++] == 'S') {
        _latitude = _latitude * -1;
    }

    j++;
    k = 0;

    while (data[j] != 0x2C) {
        buffer[k++] = data[j++];
    }

    buffer[k] = 0x00;
    _longitude = atof(buffer);
    int lon_deg = floor(_longitude / 100);
    double lon_min = _longitude - (lon_deg * 100);
    _longitude = lon_deg + (lon_min / 60);

    j++;

    if (data[j++] == 'W') {
        _longitude = _longitude * -1;
    }

    j++;
    buffer[0] = data[j++];
    buffer[1] = 0x00;
    _quality = atoi(buffer);

    j++;
    k = 0;

    while (data[j] != 0x2C) {
        buffer[k++] = data[j++];
    }

    buffer[k] = 0x00;
    _numSatellites = atoi(buffer);

    j++;
    k = 0;

    while (data[j] != 0x2C) {
        buffer[k++] = data[j++];
    }

    buffer[k] = 0x00;
    _hdop = atof(buffer);

    j++;
    k = 0;

    while (data[j] != 0x2C) {
        buffer[k++] = data[j++];
    }

    buffer[k] = 0x00;
    _altitude = atof(buffer);

    j += 3;
    k = 0;

    while (data[j] != 0x2C) {
        buffer[k++] = data[j++];
    }

    buffer[k] = 0x00;
    _geoidHeight = atof(buffer);
}

/**
 * QGPSDevice::parseGSA()
 *
 * Parses a GPGSA string that contains information about the nature
 * of the fix, such as DOP (dillution of precision) and active satellites
 * based on the viewing mask and almanac data of the reciever.
 *
 * The format of the GPGSA String is as follows:
 *
 *  $GPGSA,A,3,04,05,,09,12,,,24,,,,,2.5,1.3,2.1*39
 *  |||||||||||||||||||||||||||||||||||||||||||||||
 *  01234567890123456789012345678901234567890123456
 *  |         |         |         |         |
 *  0         10        20        30        40
 *
 *  GPGSA       -   Information about satellite status
 *  A           -   Fix mode, (A)utomatic or (M)anual
 *  3           -   Fix type:
 *                      1 = Invalid
 *                      2 = 2D
 *                      3 = 3D (4 or more satellites)
 *  04,05,...   -   Satellites used in the solution (up to 12)
 *  2.5         -   DOP (dillution of precision)
 *  1.3         -   Horizontal DOP
 *  2.1         -   Vertical DOP
 *  *39         -   Checksum
 *
 * @param char  The full NMEA GPGSA string, from $ to checksum
 */
void NMEAParser::parseGSA(const char *data)
{
    int j, k;
    int sats[12];
    char buffer[32];

    j = 7;
    k = 0;

    _fixMode = data[j++];
    j++;

    buffer[0] = data[j++];
    buffer[1] = 0x00;
    _fixType = atoi(buffer);

    j++;

    for (int i = 0; i < 12; i++) {
        if (data[j] == 0x2C) {
            j++;
            continue;
        }
        while (data[j] != 0x2C) {
            buffer[k++] = data[j++];
        }
        buffer[k] = 0x00;
        sats[i] = atoi(buffer);
        k = 0;
    }

    j++;

    while (data[j] != 0x2C) {
        buffer[k++] = data[j++];
    }
    buffer[k] = 0x00;
    _dop = atof(buffer);

    j++;
    k = 0;

    while (data[j] != 0x2C) {
        buffer[k++] = data[j++];
    }
    buffer[k] = 0x00;
    _hdop = atof(buffer);

    j++;
    k = 0;

    while (data[j] != 0x2C) {
        buffer[k++] = data[j++];
    }
    buffer[k] = 0x00;
    _vdop = atof(buffer);
}

void NMEAParser::parseGSV(const char *data)
{

}

double NMEAParser::latitude()
{
    return _latitude;
}

double NMEAParser::longitude()
{
    return _longitude;
}

double NMEAParser::altitude()
{
    return _altitude;
}

double NMEAParser::geoidHeight()
{
    return _geoidHeight;
}

double NMEAParser::time()
{
    return _time;
}

int NMEAParser::numSatellites()
{
    return _numSatellites;
}

int NMEAParser::quality()
{
    return _quality;
}

double NMEAParser::hdop()
{
    return _hdop;
}

int NMEAParser::utcHours()
{
    return _utcHours;
}

int NMEAParser::utcMinutes()
{
    return _utcMinutes;
}

double NMEAParser::utcSeconds()
{
    return _utcSeconds;
}
