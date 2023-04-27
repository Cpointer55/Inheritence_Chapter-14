#include "Truck.h"

#include <iostream>


// methods get and return data to the Inheritence cpp


//constructors
Truck::Truck()
{
	setTowingCapacity(0);
}

Truck::Truck(string make, int model, double towing) : vehicle(make, model)
{
	TowingCapacity = towing;
}

void Truck::setTowingCapacity(double towing)
{
	TowingCapacity = towing;
}

double Truck::getTowingCapacity()
{
	return TowingCapacity;
}


// virtual function called to display information about the truck
void Truck::DisplayInfo()
{
	vehicle::DisplayInfo();
	cout << "Towing capacity: " << TowingCapacity << endl;
}