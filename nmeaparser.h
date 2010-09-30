#ifndef NMEAPARSER_H
#define NMEAPARSER_H
#define FIX_TYPE_AUTOMATIC 'A'
#define FIX_TYPE_MANUAL 'M'

#include "nmeasatellitelist.h"

class NMEAParser
{
	public:
		NMEAParser();
        void parse(const char *data);

        double latitude();
        double longitude();
        double altitude();
        double geoidHeight();
        double hdop();
        double time();
		int numSatellites();
		int quality();
		int fixType();
		int utcHours();
		int utcMinutes();
        double utcSeconds();

	protected:
        void parseGGA(const char *data);
        void parseGSA(const char *data);
        void parseGSV(const char *data);
		// void parseRMC(char *data);

        double _latitude;
        double _longitude;
        double _altitude;
        double _geoidHeight;
        double _hdop;
        double _vdop;
        double _dop;
        double _time;
		int _utcHours;
		int _utcMinutes;
        double _utcSeconds;
		int _numSatellites;
		int _quality;
		int _fixType;
		char _fixMode;

		NMEASatelliteList *_satellites;
};

#endif
