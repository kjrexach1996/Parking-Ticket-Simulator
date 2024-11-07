//PoliceOfficer.cpp - implementation file for PoliceOfficer class.

#include <iostream>
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "PoliceOfficer.h"

using namespace std;

string PoliceOfficer::getName()
{
	return name;
}

string PoliceOfficer::getBadgeNum()
{
	return badgeNum;
}

void PoliceOfficer::isExpired(ParkedCar& car, ParkingMeter& meter)
{
	if ((meter.getMin() - car.getMin()) < 0)
		car.setExpirationStatus(true);
}


