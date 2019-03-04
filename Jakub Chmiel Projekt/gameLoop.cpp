#include "Functions.h"

using namespace std;

void findMaxMin(Card Deck[], int maxind, int minind, double DoubleValue, int IntValue, int k)
{
	bool minmax = 0;   //min=0
	double min = 10000.0, max = -1.0, buffdouble;
	int maxint = -1, minint = 100000, buffint;
	for (int i = 0; i < 9; i++)
	{
		switch (k)
		{
		case 1: buffint = Deck[i].getVehicle()->getCylinder();
		case 2: buffint = Deck[i].getVehicle()->getSpeed();
		case 3: buffdouble = Deck[i].getVehicle()->getAcceleration();
		case 4: buffint = Deck[i].getVehicle()->getMass();
		case 5: buffdouble = Deck[i].getVehicle()->getHandling();
		case 6: buffdouble = Deck[i].getVehicle()->getBraking();
		case 7: buffdouble = Deck[i].getVehicle()->getOffroad();
		}
		if (k < 3 || k == 4)
		{
			if (buffint < minint)
			{
				minind = i;
			}
			if (buffint > maxint)
			{
				maxind = i;
			}
			if (buffint > IntValue)
			{
				return;
			}
		}
		else
		{
			if (buffdouble < min)
			{
				minind = i;
			}
			if (buffdouble > max)
			{
				maxind = i;
			}
			if (buffdouble > DoubleValue)
			{
				return;
			}
		}
	}
}

void gameLoop(Card fullDeck[], bool checkUse[], Card playerDeck[], Card CPUDeck[])
{
	int i, j, k, m, maxind = 0, minind = 0, roundCount = 0, CPURoundWon = 0, playerRoundWon = 0, CPUHandsWon = 0, playerHandsWon = 0, lastWinner = rand() % 2, playerIntValue, CPUIntValue;             //lastWinner=0 = player starts, else cpu starts
	bool playerUsed[9] = { 0 }, CPUUsed[9] = { 0 }, CPUwins = 0;
	double playerDoubleValue, CPUDoubleValue;
	for (int roundCount = 1; roundCount <= 3; roundCount++)
	{
		cout << "RUNDA " << roundCount << endl << endl << endl << endl;
		for (i = 0; i < 9; i++)
		{
			playerUsed[i] = 0;
			CPUUsed[i] = 0;
		}
		playerHandsWon = 0;
		CPUHandsWon = 0;
		if (lastWinner == 1)
		{
			cout << "Rozpoczynasz runde." << endl << endl;
		}
		else
		{
			cout << "Runde rozpocznie komputer." << endl << endl;
		}
		dealCards(fullDeck, checkUse, playerDeck, CPUDeck);
		for (i = 0; i < 9;)
		{
			if (lastWinner == 1)							//PLAYER STARTS
			{
				cout << "Twoja karta: " << endl << endl;
				j = 8;
				while (playerUsed[j] == 1)
				{
					j--;
				}
				playerUsed[j] = 1;
				playerDeck[j].printCard();
				cout << endl << "Wybierz parametr do porownania" << endl;
				cin >> k;
				cout << "Twoja wartosc: ";
				switch (k)
				{
				case 1: cout << playerDeck[j].getVehicle()->getCylinder(), playerIntValue = playerDeck[j].getVehicle()->getCylinder(); break;
				case 2: cout << playerDeck[j].getVehicle()->getSpeed(), playerIntValue = playerDeck[j].getVehicle()->getSpeed(); break;
				case 3: cout << playerDeck[j].getVehicle()->getAcceleration(), playerDoubleValue = playerDeck[j].getVehicle()->getAcceleration(); break;
				case 4: cout << playerDeck[j].getVehicle()->getMass(), playerIntValue = playerDeck[j].getVehicle()->getMass(); break;
				case 5: cout << playerDeck[j].getVehicle()->getHandling(), playerDoubleValue = playerDeck[j].getVehicle()->getHandling(); break;
				case 6: cout << playerDeck[j].getVehicle()->getBraking(), playerDoubleValue = playerDeck[j].getVehicle()->getBraking(); break;
				case 7: cout << playerDeck[j].getVehicle()->getOffroad(), playerDoubleValue = playerDeck[j].getVehicle()->getOffroad(); break;
				default: cout << "Wprowadzono nieprawidlowa wartosc.";
				}
				cout << endl << endl << "Wartosc przeciwnika: ";
				findMaxMin(CPUDeck, maxind, minind, playerDoubleValue, playerIntValue, k);
				switch (k)
				{
				case 1:
					if (CPUDeck[maxind].getVehicle()->getCylinder() > playerIntValue)
					{
						cout << CPUDeck[maxind].getVehicle()->getCylinder();
						CPUwins = 1;
					}
					else
					{
						cout << CPUDeck[minind].getVehicle()->getCylinder();
						CPUwins = 0;
					};
					break;
				case 2:
					if (CPUDeck[maxind].getVehicle()->getSpeed() > playerIntValue)
					{
						CPUwins = 1;
						cout << CPUDeck[maxind].getVehicle()->getSpeed();
					}
					else
					{
						CPUwins = 0;
						cout << CPUDeck[minind].getVehicle()->getSpeed();
					};
					break;
				case 3:
					if (CPUDeck[maxind].getVehicle()->getAcceleration() < playerDoubleValue)
					{
						CPUwins = 1;
						cout << CPUDeck[maxind].getVehicle()->getAcceleration();
					}
					else
					{
						CPUwins = 0;
						cout << CPUDeck[minind].getVehicle()->getAcceleration();
					};
					break;
				case 4:
					if (CPUDeck[maxind].getVehicle()->getMass() > playerIntValue)
					{
						CPUwins = 1;
						cout << CPUDeck[maxind].getVehicle()->getMass();
					}
					else
					{
						CPUwins = 0;
						cout << CPUDeck[minind].getVehicle()->getMass();
					};
					break;
				case 5:
					if (CPUDeck[maxind].getVehicle()->getHandling() > playerDoubleValue)
					{
						CPUwins = 1;
						cout << CPUDeck[maxind].getVehicle()->getHandling();
					}
					else
					{
						CPUwins = 0;
						cout << CPUDeck[minind].getVehicle()->getHandling();
					};
					break;
				case 6:
					if (CPUDeck[maxind].getVehicle()->getBraking() > playerDoubleValue)
					{
						CPUwins = 1;
						cout << CPUDeck[maxind].getVehicle()->getBraking();
					}
					else
					{
						CPUwins = 0;
						cout << CPUDeck[minind].getVehicle()->getBraking();
					};
					break;
				case 7:
					if (CPUDeck[maxind].getVehicle()->getOffroad() > playerDoubleValue)
					{
						CPUwins = 1;
						cout << CPUDeck[maxind].getVehicle()->getOffroad();
					}
					else
					{
						CPUwins = 0;
						cout << CPUDeck[minind].getVehicle()->getOffroad();
					};
					break;
				}
				if (CPUwins == 1)
				{
					CPUUsed[maxind] = 1;
					cout << endl << "Wygrywa komputer.";
					CPUHandsWon++;
					lastWinner = 0;
				}
				else
				{
					CPUUsed[minind] = 1;
					cout << endl << "Wygrywasz.";
					playerHandsWon++;
					lastWinner = 1;
				}
				i++;
			}
			else                              //CPU STARTS
			{
				cout << endl << "Komputer wybiera karte: " << endl << endl << endl;
				j = 8;
				while (CPUUsed[j] == 1)
				{
					j--;
				}
				CPUUsed[j] = 1;
				CPUDeck[j].printCard();
				cout << endl << endl << "Wybrany parametr: ";
				k = rand() % 7 + 1;
				switch (k)
				{
				case 1: cout << "Liczba cylindrow \n\nWartosc: " << CPUDeck[j].getVehicle()->getCylinder(), CPUIntValue = CPUDeck[j].getVehicle()->getCylinder(); break;
				case 2: cout << "Predkosc \n\nWartosc: " << CPUDeck[j].getVehicle()->getSpeed(), CPUIntValue = CPUDeck[j].getVehicle()->getSpeed(); break;
				case 3: cout << "Przyspieszenie \n\nWartosc: " << CPUDeck[j].getVehicle()->getAcceleration(), CPUDoubleValue = CPUDeck[j].getVehicle()->getAcceleration(); break;
				case 4: cout << "Masa \n\nWartosc: " << CPUDeck[j].getVehicle()->getMass(), CPUIntValue = CPUDeck[j].getVehicle()->getMass(); break;
				case 5: cout << "Przyczepnosc \n\nWartosc: " << CPUDeck[j].getVehicle()->getHandling(), CPUDoubleValue = CPUDeck[j].getVehicle()->getHandling(); break;
				case 6: cout << "Hamowanie \n\nWartosc: " << CPUDeck[j].getVehicle()->getBraking(), CPUDoubleValue = CPUDeck[j].getVehicle()->getBraking(); break;
				case 7: cout << "Off-road \n\nWartosc: " << CPUDeck[j].getVehicle()->getOffroad(), CPUDoubleValue = CPUDeck[j].getVehicle()->getOffroad(); break;
				default: cout << "Wprowadzono nieprawidlowa wartosc.";
				}
				cout << endl << endl << "Twoje karty: " << endl << endl << endl;
				for (m = 0; m < 9; m++)
				{
					if (playerUsed[m] == 0)
					{
						playerDeck[m].printCard();
						cout << endl << "____________________________________________________________________________________";
					}
				}
				cout << endl << endl << "Wybierz karte: ";
				cin >> m;
				playerUsed[m - 1] = 1;
				switch (k)
				{
				case 1:
					if (playerDeck[m - 1].getVehicle()->getCylinder() < CPUIntValue)
					{
						CPUwins = 1;
					}
					else
					{
						CPUwins = 0;
					};
					break;
				case 2:
					if (playerDeck[m - 1].getVehicle()->getSpeed() < CPUIntValue)
					{
						CPUwins = 1;
					}
					else
					{
						CPUwins = 0;
					};
					break;
				case 3:
					if (playerDeck[m - 1].getVehicle()->getAcceleration() > CPUDoubleValue)
					{
						CPUwins = 1;
					}
					else
					{
						CPUwins = 0;
					};
					break;
				case 4:
					if (playerDeck[m - 1].getVehicle()->getMass() < CPUIntValue)
					{
						CPUwins = 1;
					}
					else
					{
						CPUwins = 0;
					};
					break;
				case 5:
					if (playerDeck[m - 1].getVehicle()->getHandling() < CPUDoubleValue)
					{
						CPUwins = 1;
					}
					else
					{
						CPUwins = 0;
					};
					break;
				case 6:
					if (playerDeck[m - 1].getVehicle()->getBraking() < CPUDoubleValue)
					{
						CPUwins = 1;
					}
					else
					{
						CPUwins = 0;
					};
					break;
				case 7:
					if (playerDeck[m - 1].getVehicle()->getOffroad() < CPUDoubleValue)
					{
						CPUwins = 1;
					}
					else
					{
						CPUwins = 0;
					};
					break;
				}
				if (CPUwins == 1)
				{
					cout << "Wygrywa komputer.";
					CPUHandsWon++;
					lastWinner = 0;
				}
				else
				{
					cout << "Wygrywasz.";
					playerHandsWon++;
					lastWinner = 1;
				}
				i++;
			}
		}
		if (playerHandsWon > CPUHandsWon)
		{
			cout << endl << endl << "Koniec rundy. Wygrywasz z wynikiem" << playerHandsWon << "-" << CPUHandsWon << endl << endl;
			playerRoundWon++;
			lastWinner = 1;
		}
		else
		{
			cout << endl << endl << "Koniec rundy. Komputer wygrywa z wynikiem " << CPUHandsWon << "-" << playerHandsWon << endl << endl;
			CPUHandsWon++;
			lastWinner = 0;
		}
		cout << "Obecny wynik: " << playerRoundWon << "-" << CPURoundWon << endl << endl << endl;
		cout << "Wcisnij ENTER, zeby przejsc do nastepnej rundy ";
		cin.ignore();
		cin.get();
	}
	if (playerRoundWon > CPURoundWon)
	{
		cout << endl << endl << "Wygrales. Gra zakonczyla sie z wynikiem " << playerRoundWon << "-" << CPURoundWon << endl << endl << endl;
	}
	else
	{
		cout << endl << endl << "Przegrales. Gra zakonczyla sie z wynikiem " << playerRoundWon << "-" << CPURoundWon << endl << endl << endl;
	}
}