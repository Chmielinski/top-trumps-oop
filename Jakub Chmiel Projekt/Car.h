#pragma once
#include "Vehicles.h"

class Car : public Vehicle
{
public:
	Car();
	Car(Car &car);
	Car(string &name);
	void printVehicleData();
	~Car();
};

class Sport : public Car
{
public:
	Sport();
	Sport(string name);
	Sport(Sport &sport);
	void printVehicleData();
	~Sport();
};

class Family : public Car
{
public:
	Family();
	Family(string &name);
	Family(Family &family);
	void printVehicleData();
	~Family();
};

class Offroad : public Car
{
public:
	Offroad();
	Offroad(string &name);
	Offroad(Offroad &offroad);
	void printVehicleData();
	~Offroad();
};


class Race : public Car
{
public:
	Race();
	Race(string &name);
	Race(Race &race);
	void printVehicleData();
	~Race();
};

