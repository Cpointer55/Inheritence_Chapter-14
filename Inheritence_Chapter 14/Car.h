#pragma once

#ifndef Car_H

#define Car_H

#include "Vehicle.h"

class Car : public vehicle{


protected:

	int NumberOfDoors;

public:
	Car();
	Car(string Build, int Model, int Doors);

	int GetNumberOfDoors();

	void SetNumberOfDoors(int);

	virtual void DisplayInfo() override;

};

#endif
