#pragma once

#ifndef Truck_H
#define Truck_H


#include "vehicle.h"

class Truck :
	public vehicle
{

private:

	double TowingCapacity;


public:

	Truck();
	Truck(string, int, double);
	double getTowingCapacity();
	void setTowingCapacity(double);
	void DisplayInfo();

};

#endif