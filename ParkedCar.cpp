//ParkedCar.cpp - implementation file for parkedCar class.

#include <string>
#include "ParkedCar.h"

using namespace std;

string ParkedCar::getMake()
{
	return make;
}

string ParkedCar::getModel()
{
	return model;
}

string ParkedCar::getColor()
{
	return color;
}

string ParkedCar::getLicenseNum()
{
	return licenseNum;
}

int ParkedCar::getMin()
{
	return minParked;
}

bool ParkedCar::getExpirationStatus()
{
	return expired;
}

void ParkedCar::setExpirationStatus(bool status)
{
	expired = status;
}