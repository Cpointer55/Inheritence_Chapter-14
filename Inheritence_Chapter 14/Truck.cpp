#include "Truck.h"

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

void Truck::DisplayInfo()
{
	vehicle::DisplayInfo();
	cout << "Towing capacity: " << TowingCapacity << endl;
}