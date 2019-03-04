#pragma once
#include <iostream>
#include "Vehicles.h"

class Card
{
private:
	int ID;
	Vehicle* vehicle = new Vehicle;
public:
	Card();
	Card(Card &card);
	Card(int ID, Vehicle* &vehicle);
	int getID()
	{
		return ID;
	}
	void setVehicle(Vehicle* vehicle)
	{
		this->vehicle = vehicle;
	}
	void setID(int ID)
	{
		this->ID = ID;
	}
	Vehicle* getVehicle()
	{
		return vehicle;
	}
	void printCard();
	~Card();
};