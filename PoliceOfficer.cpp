//PoliceOfficer.cpp - implementation file for policeOfficer class.

#include <iostream>
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "PoliceOfficer.h"
#include "ParkingTicket.h"

using namespace std;

string PoliceOfficer::getName()
{
	return name;
}

string PoliceOfficer::getBadgeNum()
{
	return badgeNum;
}

void PoliceOfficer::isExpired(ParkedCar car, ParkingMeter meter)
{
	if ((meter.getMin() - car.getMin()) << 0)
		car.setExpirationStatus(true);
	else
		cout << "No parking ticket issued." << endl;
}

ParkingTicket PoliceOfficer::issueTicket(ParkedCar car, ParkingMeter meter, PoliceOfficer officer)
{
	if (car.getExpirationStatus() == true)
		return ParkingTicket(car, meter, officer);
}
