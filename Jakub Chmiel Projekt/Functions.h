#pragma once
#include <cmath>
#include <iostream>
#include "Vehicles.h"
#include "Card.h"

void gameLoop(Card fullDeck[], bool checkUse[], Card playerDeck[], Card CPUDeck[]);
void findMaxMin(Card Deck[], int maxind, int minind, double DoubleValue, int IntValue, int k);
Vehicle* createVehicles(Vehicle* vehicles[], string vehnames[]);
void dealCards(Card fullDeck[], bool checkUse[], Card playerDeck[], Card CPUDeck[]);
string fix_(string vehnames[]);