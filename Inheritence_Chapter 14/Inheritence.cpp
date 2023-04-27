// Matthew Mondi
// CIS 1202 Assignment 14
//4/26/2023

#include<iostream>

#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"


// Main cpp that calls methods from the vehicle, truck, and car cpps
int main()
{
	vehicle Vehicle = vehicle();
	Car car = Car();
	Truck truck = Truck();

	string Build = "";
	int Model;
	int NumberOfDoors;
	double TowingCapacity;


	cout << "Enter the Vehicle Manufacturer: ";
	cin >> Build;
	Vehicle.SetManufacturer(Build);
	cout << endl;

	cout << "Enter the Year built: ";
	cin >> Model;
	Vehicle.YearBuilt(Model);
	cout << endl;

	Vehicle.DisplayInfo();

	cout << "Enter the Car Manufacturer: ";
	cin >> Build;
	car.SetManufacturer(Build);
	cout << endl;

	cout << "Enter the Year built: ";
	cin >> Model;
	car.YearBuilt(Model);
	cout << endl;

	cout << "Enter the Number of Doors the Car has: ";
	cin >> NumberOfDoors;
	car.SetNumberOfDoors(NumberOfDoors);
	cout << endl;

	cout << "CarInfo:" << endl;
	car.DisplayInfo();
	cout << endl;

	cout << "Enter the Truck Manufacturer: ";
	cin >> Build;
	truck.SetManufacturer(Build);
	cout << endl;

	cout << "Enter the Year built: ";
	cin >> Model;
	truck.YearBuilt(Model);

	cout << "Enter the Truck's Towing Capacity: ";
	cin >> TowingCapacity;
	truck.setTowingCapacity(TowingCapacity);

	cout << "TruckInfo: " << endl;
	truck.DisplayInfo();
}