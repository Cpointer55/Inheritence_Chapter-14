#pragma once
// Header File for the Truck class that inherits year and Manufacturer from the Vehicle class
#ifndef Truck_H
#define Truck_H



#include "vehicle.h"

class Truck :
	public vehicle
{

private:

	double TowingCapacity;
	// private member exclusive to the Truck class

public:
	// all the methods for storing the data for the Truck
	Truck();
	Truck(string, int, double);
	double getTowingCapacity();
	void setTowingCapacity(double);
	void DisplayInfo();

};

#endif