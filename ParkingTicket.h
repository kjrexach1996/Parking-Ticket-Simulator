//ParkingTicket.h - specification file for parkingTicket class.

#pragma once

#include <string>
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "PoliceOfficer.h"

using namespace std;

class ParkingTicket
{
private:
	ParkedCar car;
	ParkingMeter meter;
	PoliceOfficer officer;
public:
	void printTicket(ParkedCar, ParkingMeter, PoliceOfficer);

	ParkingTicket(ParkedCar c, ParkingMeter m, PoliceOfficer o)
		: car(c), meter(m), officer(o) {}
};