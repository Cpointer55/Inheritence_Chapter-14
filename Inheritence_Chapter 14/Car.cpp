#include "Car.h"


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



// display method
void Car::DisplayInfo() {
	vehicle::DisplayInfo();
	cout << "Doors :  " << NumberOfDoors << endl;

}