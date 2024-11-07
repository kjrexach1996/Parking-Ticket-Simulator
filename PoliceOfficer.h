//PoliceOfficer.h - specification file for PoliceOfficer class.

#pragma once
#include <string>
#include "ParkedCar.h"
#include "ParkingMeter.h"

using namespace std;

class PoliceOfficer
{
private:
	string name;
	string badgeNum;
public:
	//Function expects PoliceOfficer object to exist; function will return
	//"NAME" when object is generated through default parameters or the name of the 
	//officer should one be provided.
	string getName();

	//Function expects PoliceOfficer object to exist; function will return
	//"BADGE NUMBER" when object is generated through default parameters or the badge
	// number of the officer should one be provided.
	string getBadgeNum();

	//Function expects ParkedCar and ParkingMeter objects to exist and to be received;
	//also expects to be able to access car's number of minutes parked and meter's number
	//of minutes purchased.
	//Function will change the status of the ParkedCar object's expired member variable to true
	//should the difference between the number of meter minutes and number of car minutes parked
	//equate to less than 0. This will indicate that the car's parking time has expired.
	void isExpired(ParkedCar&, ParkingMeter&);

	//PoliceOfficer object constructor with default and potential user-supplied parameters.
	PoliceOfficer(string name = "NAME", string badge = "BADGE NUMBER")
		: name(name), badgeNum(badge) {}
};