#ifndef NMEASATELLITELIST_H
#define NMEASATELLITELIST_H

class NMEASatelliteList
{
	public:
		NMEASatelliteList();
		NMEASatelliteList *next();
		NMEASatelliteList *prev();
		int prn();
		int elevation();
		int azimuth();
		int snr();
		void setPrn(int prn);
		void setElevation(int elevation);
		void setAzimuth(int azimuth);
		void setSnr(int snr);
		void setNext(NMEASatelliteList *next);
		void setPrev(NMEASatelliteList *prev);
	private:
		NMEASatelliteList *_next;
		NMEASatelliteList *_prev;
		int _prn;
		int _elevation;
		int _azimuth;
		int _snr;
};

#endif
