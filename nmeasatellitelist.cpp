#include "nmeasatellitelist.h"

#ifndef NULL
#define NULL 0x00
#endif

NMEASatelliteList::NMEASatelliteList()
{
	_next = NULL;
	_prev = NULL;
	_prn = 0;
	_elevation = 0;
	_azimuth = 0;
	_snr = 0;
}

NMEASatelliteList *NMEASatelliteList::next()
{
	return _next;
}

NMEASatelliteList *NMEASatelliteList::prev()
{
	return _prev;
}

int NMEASatelliteList::prn()
{
	return _prn;
}

int NMEASatelliteList::elevation()
{
	return _elevation;
}

int NMEASatelliteList::azimuth()
{
	return _azimuth;
}

int NMEASatelliteList::snr()
{
	return _snr;
}

void NMEASatelliteList::setNext(NMEASatelliteList *next)
{
	_next = next;
}

void NMEASatelliteList::setPrev(NMEASatelliteList *prev)
{
	_prev = prev;
}

void NMEASatelliteList::setPrn(int prn)
{
	_prn = prn;
}

void NMEASatelliteList::setElevation(int elevation)
{
	_elevation = elevation;
}

void NMEASatelliteList::setAzimuth(int azimuth)
{
	_azimuth = azimuth;
}

void NMEASatelliteList::setSnr(int snr)
{
	_snr = snr;
}
