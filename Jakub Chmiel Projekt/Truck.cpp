#include "Truck.h"

using namespace std;

Truck::Truck()
{
	setAcceleration(10.0);
	setSpeed(0);
	setBraking(5.0);
	setHandling(5.0);
	setMass(0);
	setOffroad(5.0);
	setVehClass("Truck");
	setName("Truck ");
	setCylinder(1);
}
Truck::Truck(Truck &truck)
{
	setAcceleration(truck.getAcceleration());
	setSpeed(truck.getSpeed());
	setBraking(truck.getBraking());
	setHandling(truck.getHandling());
	setMass(truck.getMass());
	setOffroad(truck.getOffroad());
	setVehClass(truck.getVehClass());
	setName(truck.getName());
	setCylinder(truck.getCylinder());
}
Truck::Truck(string &name)
{
	setAcceleration(10.0);
	setSpeed(0);
	setBraking(5.0);
	setHandling(5.0);
	setMass(0);
	setOffroad(5.0);
	setVehClass("Truck");
	setName(name);
	setCylinder(1);
}
void Truck::printVehicleData()
{
	cout << "Nazwa: " << getName() << endl << "Klasa: " << getVehClass() << endl << "Liczba cylindrow: " << getCylinder() << endl << "Predkosc: " << getSpeed() << endl << "Przyspieszenie: " << getAcceleration() << endl << "Masa: " << getMass() << endl << "Przyczepnosc: " << getHandling() << endl << "Hamowanie: " << getBraking() << endl << "Off-road: " << getOffroad() << endl;
}

Truck::~Truck()
{
	cout << "Usunieto ciezarowke." << endl;
}
//----
PickUp::PickUp()
{
	setAcceleration(((double)rand() / (double)(RAND_MAX)) * 3 + 12);
	setSpeed(rand() % 30 + 140);
	setBraking(((double)rand() / (double)(RAND_MAX)) * 2 + 2);
	setHandling(((double)rand() / (double)(RAND_MAX)) * 2 + 2);
	setMass(rand() % 750 + 3500);
	setOffroad(((double)rand() / (double)(RAND_MAX)) * 2 + 5);
	setVehClass("Pick Up Truck");
	setName("Pick Up Truck ");
	setCylinder(2 * (rand() % 3 + 3));
}
PickUp::PickUp(PickUp &pickup)
{
	setAcceleration(pickup.getAcceleration());
	setSpeed(pickup.getSpeed());
	setBraking(pickup.getBraking());
	setHandling(pickup.getHandling());
	setMass(pickup.getMass());
	setOffroad(pickup.getOffroad());
	setVehClass(pickup.getVehClass());
	setName(pickup.getName());
	setCylinder(pickup.getCylinder());
}
PickUp::PickUp(string &name)
{
	setAcceleration(((double)rand() / (double)(RAND_MAX)) * 3 + 12);
	setSpeed(rand() % 30 + 140);
	setBraking(((double)rand() / (double)(RAND_MAX)) * 2 + 2);
	setHandling(((double)rand() / (double)(RAND_MAX)) * 2 + 2);
	setMass(rand() % 750 + 3500);
	setOffroad(((double)rand() / (double)(RAND_MAX)) * 2 + 5);
	setVehClass("Pick Up Truck");
	setName(name);
	setCylinder(2 * (rand() % 3 + 3));
}
void PickUp::printVehicleData()
{
	cout << setprecision(1) << fixed << "Nazwa: " << getName() << endl << "Klasa: " << getVehClass() << endl << "Liczba cylindrow: " << getCylinder() << endl << "Predkosc: " << getSpeed() << endl << "Przyspieszenie: " << getAcceleration() << endl << "Masa: " << getMass() << endl << "Przyczepnosc: " << getHandling() << endl << "Hamowanie: " << getBraking() << endl << "Off-road: " << getOffroad() << endl;
}

PickUp::~PickUp()
{
	cout << "Usunieto ciezarowke." << endl;
}
//---
Semi::Semi()
{
	setAcceleration(((double)rand() / (double)(RAND_MAX)) * 10 + 30);
	setSpeed(rand() % 10 + 90);
	setBraking(((double)rand() / (double)(RAND_MAX)) * 2 + 0);
	setHandling(((double)rand() / (double)(RAND_MAX)) * 2 + 0);
	setMass(rand() % 1000 + 8000);
	setOffroad(((double)rand() / (double)(RAND_MAX)) * 2 + 4);
	setVehClass("Semi Truck");
	setName("Semi Truck ");
	setCylinder(2 * (rand() % 2 + 3));
}
Semi::Semi(Semi &semi)
{
	setAcceleration(semi.getAcceleration());
	setSpeed(semi.getSpeed());
	setBraking(semi.getBraking());
	setHandling(semi.getHandling());
	setMass(semi.getMass());
	setOffroad(semi.getOffroad());
	setVehClass(semi.getVehClass());
	setName(semi.getName());
	setCylinder(semi.getCylinder());
}
Semi::Semi(string &name)
{
	setAcceleration(((double)rand() / (double)(RAND_MAX)) * 10 + 30);
	setSpeed(rand() % 10 + 90);
	setBraking(((double)rand() / (double)(RAND_MAX)) * 2 + 0);
	setHandling(((double)rand() / (double)(RAND_MAX)) * 2 + 0);
	setMass(rand() % 1000 + 8000);
	setOffroad(((double)rand() / (double)(RAND_MAX)) * 2 + 4);
	setVehClass("Semi Truck");
	setName(name);
	setCylinder(2 * (rand() % 2 + 3));
}
void Semi::printVehicleData()
{
	cout << setprecision(1) << fixed << "Nazwa: " << getName() << endl << "Klasa: " << getVehClass() << endl << "Liczba cylindrow: " << getCylinder() << endl << "Predkosc: " << getSpeed() << endl << "Przyspieszenie: " << getAcceleration() << endl << "Masa: " << getMass() << endl << "Przyczepnosc: " << getHandling() << endl << "Hamowanie: " << getBraking() << endl << "Off-road: " << getOffroad() << endl;
}

Semi::~Semi()
{
	cout << "Usunieto motocykl." << endl;
}