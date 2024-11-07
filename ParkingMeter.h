//ParkingMeter.h - specification file for ParkingMeter class.

#pragma once

class ParkingMeter
{
private:
	int minPurchased;
public:

	//Function should expect ParkingMeter object to exist;
	//Function will return 0 as a default parameter or a number of minutes
	//purchased for parking should a parameter be provided by the user.
	int getMin();

	//ParkingMeter object constructor with default and potential user-supplied parameters.
	ParkingMeter(int min = 0)
		: minPurchased(min) {}
};
