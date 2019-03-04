#pragma once
#include "Vehicles.h"



class Bike : public Vehicle
{
public:
	Bike();
	Bike(Bike &bike);
	Bike(string &name);
	void printVehicleData();
	~Bike();
};

class Tourist : public Bike
{
public:
	Tourist();
	Tourist(Tourist &tourist);
	Tourist(string &name);
	void printVehicleData();
	~Tourist();
};

class Racing : public Bike
{
public:
	Racing();
	Racing(Racing &racing);
	Racing(string &name);
	void printVehicleData();
	~Racing();
};

class Cross : public Bike
{
public:
	Cross();
	Cross(Cross &cross);
	Cross(string &name);
	void printVehicleData();
	~Cross();
};

