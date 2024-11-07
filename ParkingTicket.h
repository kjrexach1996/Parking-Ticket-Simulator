//ParkingTicket.h - specification file for ParkingTicket class.

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
	//Function expects a ParkedCar, ParkingMeter, and PoliceOfficer object to exist; also expects 
	//to have access to all orivate member variables and their functions; will be generated
	//ONLY when the ParkedCar's expired member is set to true through the PoliceOfficer object's
	//isExpired function.
	//Function will output parking ticket information in an organized fashion; ticket information will
	//include make, model, color and license plate for ParkedCar object, the PoliceOfficer object's name
	//and badge number, the number of minutes ParkedCar has been parked, the number of minutes purchased from
	//ParkingMeter, and the parking fee, if any. Function will return the parking fee by calculation during
	//printTicket function execution.
	void printTicket();

	//ParkingTicket object constructor with default and potential user-supplied parameters.
	ParkingTicket(ParkedCar c, ParkingMeter m, PoliceOfficer o)
		: car(c), meter(m), officer(o) {}
};
