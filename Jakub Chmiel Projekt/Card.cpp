#include "Card.h"

using namespace std;

Card::Card()
{
	setID(0);
}
Card::Card(Card &card)
{
	setVehicle(card.getVehicle());
	setID(card.getID());
}
Card::Card(int ID, Vehicle* &vehicle)
{
	setVehicle(vehicle);
	setID(ID);
}
void Card::printCard()
{
	cout << endl << endl << "Karta nr " << getID() << endl << endl << endl << vehicle;
}
Card::~Card()
{
}