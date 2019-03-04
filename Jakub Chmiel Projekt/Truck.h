#pragma once
#include "Vehicles.h"

class Truck :public Vehicle
{
public:
	Truck();
	Truck(Truck &truck);
	Truck(string &name);
	void printVehicleData();
	~Truck();
};

class PickUp : public Truck
{
public:
	PickUp();
	PickUp(PickUp &pickup);
	PickUp(string &name);
	void printVehicleData();
	~PickUp();
};

class Semi : public Truck
{
public:
	Semi();
	Semi(Semi &semi);
	Semi(string &name);
	void printVehicleData();
	~Semi();
};



