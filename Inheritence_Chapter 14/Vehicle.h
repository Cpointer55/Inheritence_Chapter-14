#pragma once

// Header for the Vehicle class
#ifndef Vehicle_H

#define Vehicle_H

#include <string>

using namespace std;

class vehicle
{

protected:
	string Manufacturer;
	int year;
	// protected members of the vehicle class
public:

	// methods for storing and displaying data about the vehicle
	vehicle();
	vehicle(string, int);

	string GetManufacturer();

	int GetYearBuilt();

	void SetManufacturer(string);


	void YearBuilt(int);


	virtual void DisplayInfo();






};

#endif

