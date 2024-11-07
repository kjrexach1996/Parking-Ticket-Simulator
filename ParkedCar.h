// ParkedCar.h - specification file for ParkedCar class.

#pragma once

#include <string>

using namespace std;

class ParkedCar
{
private:
	string make;
	string model;
	string color;
	string licenseNum;
	int minParked;
	bool expired;
public:
	//Function expects ParkedCar object to exist;
	//Function will return "MAKE" if created with default parameter; will also
	//return with a make of a car should a user-supplied parameter be provided.
	string getMake();

	//Function expects ParkedCar object to exist;
	//Function will return "MODEL" if created with default parameter; will also
	//return with a model of a car should a user-supplied parameter be provided.
	string getModel();

	//Function expects ParkedCar object to exist;
	//Function will return "COLOR" if created with default parameter; will also
	//return with a color of a car should a user-supplied parameter be provided.
	string getColor();

	//Function expects ParkedCar object to exist;
	//Function will return "LICENSE" if created with default parameter; will also
	//return with a license-plate number of a car should a user-supplied parameter be provided.
	string getLicenseNum();

	//Function expects ParkedCar object to exist;
	//Function will return 0 if created with default parameter; will also
	//return with the number of minutes a car has been parked should an amount is supplied.
	int getMin();

	//Function expects ParkedCar object to exist;
	//Function will return false as a default parameter; the function will also
	//return either true or false based on the result of the isExpired function under the PoliceOfficer class.
	bool getExpirationStatus();

	//Function expects ParkedCar and PoliceOfficer objects to exist, as well as the ability
	//to retrieve the number of minutes purchased at the parking meter and the number of minutes
	//a car has been parked.
	//Function will change the status of the expired member to true or false depending on whether
	//the car's parking time has expired or not.
	void setExpirationStatus(bool);

	//ParkedCar object constuctor with default and potential user-supplied parameters.
	ParkedCar(string make = "MAKE", string model = "MODEL", string color = "COLOR", string license = "LICENSE", int min = 0, bool expired = false)
		: make(make), model(model), color(color), licenseNum(license), minParked(min), expired(expired) {}
};
