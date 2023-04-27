#pragma once


#ifndef Vehicle_H

#define Vehicle_H

#include <string>

using namespace std;

class vehicle
{

protected:
	string Manufacturer;
	int year;

public:

	vehicle();
	vehicle(string, int);

	string GetManufacturer();

	int GetYearBuilt();

	void SetManufacturer(string);
	void YearBuilt(int);


	virtual void DisplayInfo();






};

#endif

