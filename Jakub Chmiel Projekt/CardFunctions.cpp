#include "Functions.h"

using namespace std;

void dealCards(Card fullDeck[], bool checkUse[], Card playerDeck[], Card CPUDeck[])
{
	signed int i, j = rand() % 54, k;
	for (i = 0; i < 18; i++)
	{
		k = pow(-1, i);
		while (checkUse[j] == 1)
		{
			j = rand() % 54;
		}
		checkUse[j] = 1;
		if (k == 1)
		{
			playerDeck[i / 2] = fullDeck[j];
			playerDeck[i / 2].setID(i / 2 + 1);
		}
		else
		{
			CPUDeck[i / 2] = fullDeck[j];
			CPUDeck[i / 2].setID(i / 2 + 1);
		}
	}
}