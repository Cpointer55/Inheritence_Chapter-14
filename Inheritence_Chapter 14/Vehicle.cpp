#include "Vehicle.h"
#include <string>
#include <iostream>

using namespace std;


vehicle::vehicle ()
{
	Manufacturer = "";
	year = 0;
}



vehicle::vehicle (string Build, int Model)
{
	Manufacturer = Build;
	year = Model;

}




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

void vehicle::DisplayInfo() {
	cout << "Manufacturer: " << Manufacturer << endl;
	cout << "Year Built:" << year << endl;

}