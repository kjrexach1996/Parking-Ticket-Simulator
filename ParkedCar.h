// ParkedCar.h - specification file for parkedCar class.

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
	string getMake();

	string getModel();

	string getColor();

	string getLicenseNum();

	int getMin();

	bool getExpirationStatus();

	void setExpirationStatus(bool);

	ParkedCar(string make = "MAKE", string model = "MODEL", string color = "COLOR", string license = "LICENSE", int min = 0, bool expired = false)
		: make(make), model(model), color(color), licenseNum(license), minParked(min), expired(expired) {}
};
