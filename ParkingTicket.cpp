//ParkingTicket.cpp - implementation file for ParkingTicket class.

#include <iostream>
#include "ParkingTicket.h"

void ParkingTicket::printTicket()
{
	if (car.getExpirationStatus() == 1)
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
	else
		cout << "No parking ticket issued." << endl;
}