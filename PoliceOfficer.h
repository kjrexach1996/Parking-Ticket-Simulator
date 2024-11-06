//PoliceOfficer.h - specification file for policeOfficer class.

#pragma once
#include <string>
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"

using namespace std;

class PoliceOfficer
{
private:
	string name;
	string badgeNum;
public:
	string getName();

	string getBadgeNum();

	void isExpired(ParkedCar, ParkingMeter);

	ParkingTicket issueTicket(ParkedCar, ParkingMeter, PoliceOfficer);

	PoliceOfficer(string name = "NAME", string badge = "BADGE NUMBER")
		: name(name), badgeNum(badge) {}
};