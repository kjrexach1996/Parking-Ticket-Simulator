//ParkingMeter.h - specification file for parkingMeter class.

#pragma once

class ParkingMeter
{
private:
	int minPurchased;
public:
	int getMin();

	ParkingMeter(int min = 0)
		: minPurchased(min) {}
};
