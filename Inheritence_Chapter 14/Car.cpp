#include "Car.h"

#include <iostream>

//constructors
Car::Car() {
	NumberOfDoors = 0;
}

Car::Car(string Build, int Model, int Doors): vehicle(Build, Model)
{
	NumberOfDoors = Doors;
}




void Car::SetNumberOfDoors(int Doors) {
	NumberOfDoors = Doors;
}

int Car::GetNumberOfDoors() {
	return NumberOfDoors;
}



// // virtual function called to display information about the truck

void Car::DisplayInfo() {
	vehicle::DisplayInfo();
	cout << "Doors :  " << NumberOfDoors << endl;

}