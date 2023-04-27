#pragma once

#ifndef Car_H

#define Car_H

#include "Vehicle.h"

// Header for the Car class that inherits Manufacturer and Year from the vehicle class

class Car : public vehicle{


protected:

	int NumberOfDoors;
	// protected member exclusive to the Car class
public:

	// methods that store and display the Data associated with the Car
	Car();
	Car(string Build, int Model, int Doors);

	int GetNumberOfDoors();

	void SetNumberOfDoors(int);

	virtual void DisplayInfo() override;

};

#endif
