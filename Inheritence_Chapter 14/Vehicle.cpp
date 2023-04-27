#include "Vehicle.h"
#include <string>
#include <iostream>

using namespace std;


vehicle::vehicle ()
{
	Manufacturer = "";
	year = 0;
}


//constructers
vehicle::vehicle (string Build, int Model)
{
	Manufacturer = Build;
	year = Model;

}

// methods get and return data to the Inheritence cpp



string vehicle::GetManufacturer() {
	return Manufacturer;
}

int vehicle::GetYearBuilt() {
	return year;
}

void vehicle::SetManufacturer(string S) {

	Manufacturer = S;
}

void vehicle::YearBuilt(int I) {
	year = I;
}

// virtual function called to display information about the truck
void vehicle::DisplayInfo() {
	cout << "Manufacturer: " << Manufacturer << endl;
	cout << "Year Built:" << year << endl;

}