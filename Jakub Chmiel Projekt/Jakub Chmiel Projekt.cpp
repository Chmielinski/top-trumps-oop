//TODO: PRINT IN GRID
//SYSTEM("CLS")
//MYSLEEP
//DRAWS


#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <vector>
#include <fstream>
#include "Functions.h"
#include "Vehicles.h"
#include "Car.h"
#include "Bike.h"
#include "Truck.h"
#include "Card.h"

using namespace std;

int main()
{
	srand(static_cast <unsigned int>(time(nullptr)));
	int i = 0;
	Card fullDeck[54], playerDeck[9], CPUDeck[9];
	bool checkUse[54] = { 0 };
	Vehicle* vehicles[54];
	ifstream names("Vehicle_names.txt");
	string vehnames[54];
	if (names.bad())
	{
		return 1;
	}
	if (names.is_open())
	{
		for (i = 0; i < 54; i++)
		{
			names >> vehnames[i];
		}
	}
	fix_(vehnames);
	createVehicles(vehicles, vehnames);
	for (i = 0; i < 54; i++)
	{
		fullDeck[i] = Card(i+1, vehicles[i]);
	}
	gameLoop(fullDeck, checkUse, playerDeck, CPUDeck);
	cin.ignore();
	cin.get();
    return 0;
}