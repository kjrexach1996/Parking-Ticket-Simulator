//ParkingTicket.cpp - implementation file for parkingTicket class.

#include <iostream>
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "PoliceOfficer.h"
#include "ParkingTicket.h"

void ParkingTicket::printTicket(ParkedCar car, ParkingMeter meter, PoliceOfficer officer)
{
	cout << "*** Parking Ticket ***" << endl;
	cout << "Officer " << officer.getName() << " Badge Number " << officer.getBadgeNum() << endl;
	cout << "Vehicle License Number: " << car.getLicenseNum() << endl;
	cout << "Make: " << car.getMake() << " Model: " << car.getModel() << " Color: " << car.getColor() << endl;
	cout << "Meter Minutes: " << meter.getMin() << " Minutes Parked: " << car.getMin() << endl;

	int fine = 25;
	int carMin = car.getMin();
	int meterMin = meter.getMin();
	while (carMin > meterMin)
	{
		carMin -= 60;
		if (carMin > meterMin)
			fine += 10;
	}
	cout << "Parking Fee: $" << fine << endl;
}