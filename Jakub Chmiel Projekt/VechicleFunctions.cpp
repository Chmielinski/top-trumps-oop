#include "Functions.h"
#include "Car.h"
#include "Bike.h"
#include "Truck.h"

using namespace std;

string fix_(string vehnames[])
{
	for (int i = 0; i < 54; i++)
	{
		for (int j = 0; vehnames[i][j] != '\0'; j++)
		{
			if (vehnames[i][j] == '_')
			{
				vehnames[i][j] = ' ';
			}
		}
	}
	return *vehnames;
}

Vehicle* createVehicles(Vehicle* vehicles[], string vehnames[])
{
	int i;
	for (i = 0; i < 6; i++)
	{
		vehicles[i] = new Sport(vehnames[i]);
	}
	for (i; i < 12; i++)
	{
		vehicles[i] = new Family(vehnames[i]);
	}
	for (i; i < 18; i++)
	{
		vehicles[i] = new Offroad(vehnames[i]);
	}
	for (i; i < 24; i++)
	{
		vehicles[i] = new Race(vehnames[i]);
	}
	for (i; i < 30; i++)
	{
		vehicles[i] = new Tourist(vehnames[i]);
	}
	for (i; i < 36; i++)
	{
		vehicles[i] = new Racing(vehnames[i]);
	}
	for (i; i < 42; i++)
	{
		vehicles[i] = new Cross(vehnames[i]);
	}
	for (i; i < 48; i++)
	{
		vehicles[i] = new PickUp(vehnames[i]);
	}
	for (i; i < 54; i++)
	{
		vehicles[i] = new Semi(vehnames[i]);
	}
	return *vehicles;
}