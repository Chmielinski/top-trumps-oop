#include "Bike.h"

using namespace std;

Bike::Bike()
{
	setAcceleration(10.0);
	setSpeed(0);
	setBraking(5.0);
	setHandling(5.0);
	setMass(0);
	setOffroad(5.0);
	setVehClass("Bike");
	setName("Unknown");
	setCylinder(1);
}
Bike::Bike(Bike &bike)
{
	setAcceleration(bike.getAcceleration());
	setSpeed(bike.getSpeed());
	setBraking(bike.getBraking());
	setHandling(bike.getHandling());
	setMass(bike.getMass());
	setOffroad(bike.getOffroad());
	setVehClass(bike.getVehClass());
	setName(bike.getName());
	setCylinder(bike.getCylinder());
}
Bike::Bike(string &name)
{
	setAcceleration(10.0);
	setSpeed(0);
	setBraking(5.0);
	setHandling(5.0);
	setMass(0);
	setOffroad(5.0);
	setVehClass("Bike");
	setName("Bike ");
	setCylinder(1);
}
void Bike::printVehicleData()
{

}

Bike::~Bike()
{
	cout << "Usunieto motocykl" << endl;
}
//---
Tourist::Tourist()
{
	setAcceleration(((double)rand() / (double)(RAND_MAX)) * 2 + 6);
	setSpeed(rand() % 50 + 150);
	setBraking(((double)rand() / (double)(RAND_MAX)) * 2 + 5);
	setHandling(((double)rand() / (double)(RAND_MAX)) * 2 + 5);
	setMass(rand() % 100 + 300);
	setOffroad(((double)rand() / (double)(RAND_MAX)) * 2 + 3);
	setVehClass("Touring Bike");
	setName("Touring Bike ");
	setCylinder(2 * (rand() % 2 + 2));
}
Tourist::Tourist(Tourist &tourist)
{
	setAcceleration(tourist.getAcceleration());
	setSpeed(tourist.getSpeed());
	setBraking(tourist.getBraking());
	setHandling(tourist.getHandling());
	setMass(tourist.getMass());
	setOffroad(tourist.getOffroad());
	setVehClass(tourist.getVehClass());
	setName(tourist.getName());
	setCylinder(tourist.getCylinder());
}
Tourist::Tourist(string &name)
{
	setAcceleration(((double)rand() / (double)(RAND_MAX)) * 2 + 6);
	setSpeed(rand() % 50 + 150);
	setBraking(((double)rand() / (double)(RAND_MAX)) * 2 + 5);
	setHandling(((double)rand() / (double)(RAND_MAX)) * 2 + 5);
	setMass(rand() % 100 + 300);
	setOffroad(((double)rand() / (double)(RAND_MAX)) * 2 + 3);
	setVehClass("Touring Bike");
	setName(name);
	setCylinder(2 * (rand() % 2 + 2));
}
void Tourist::printVehicleData()
{
	cout << setprecision(1) << fixed << "Nazwa: " << getName() << endl << "Klasa: " << getVehClass() << endl << "Liczba cylindrow: " << getCylinder() << endl << "Predkosc: " << getSpeed() << endl << "Przyspieszenie: " << getAcceleration() << endl << "Masa: " << getMass() << endl << "Przyczepnosc: " << getHandling() << endl << "Hamowanie: " << getBraking() << endl << "Off-road: " << getOffroad() << endl;
}
Tourist::~Tourist()
{
	cout << "Usunieto motocykl." << endl;
}

//---

Racing::Racing()
{
	setAcceleration(((double)rand() / (double)(RAND_MAX)) * 1 + 2.2);
	setSpeed(rand() % 50 + 300);
	setBraking(((double)rand() / (double)(RAND_MAX)) * 2 + 8);
	setHandling(((double)rand() / (double)(RAND_MAX)) * 2 + 7);
	setMass(rand() % 50 + 160);
	setOffroad(((double)rand() / (double)(RAND_MAX)) * 2);
	setVehClass("Racing Bike");
	setName("Racing Bike ");
	setCylinder(4);
}
Racing::Racing(Racing &racing)
{
	setAcceleration(racing.getAcceleration());
	setSpeed(racing.getSpeed());
	setBraking(racing.getBraking());
	setHandling(racing.getHandling());
	setMass(racing.getMass());
	setOffroad(racing.getOffroad());
	setVehClass(racing.getVehClass());
	setName(racing.getName());
	setCylinder(racing.getCylinder());
}
Racing::Racing(string &name)
{
	setAcceleration(((double)rand() / (double)(RAND_MAX)) * 1 + 2.2);
	setSpeed(rand() % 50 + 300);
	setBraking(((double)rand() / (double)(RAND_MAX)) * 2 + 8);
	setHandling(((double)rand() / (double)(RAND_MAX)) * 2 + 7);
	setMass(rand() % 50 + 160);
	setOffroad(((double)rand() / (double)(RAND_MAX)) * 2);
	setVehClass("Racing Bike");
	setName(name);
	setCylinder(4);
}
void Racing::printVehicleData()
{
	cout << setprecision(1) << fixed << "Nazwa: " << getName() << endl << "Klasa: " << getVehClass() << endl << "Liczba cylindrow: " << getCylinder() << endl << "Predkosc: " << getSpeed() << endl << "Przyspieszenie: " << getAcceleration() << endl << "Masa: " << getMass() << endl << "Przyczepnosc: " << getHandling() << endl << "Hamowanie: " << getBraking() << endl << "Off-road: " << getOffroad() << endl;
}
Racing::~Racing()
{
	cout << "Usunieto motocykl" << endl;
}

//---

Cross::Cross()
{
	setAcceleration(((double)rand() / (double)(RAND_MAX)) * 1 + 3);
	setSpeed(rand() % 35 + 140);
	setBraking(((double)rand() / (double)(RAND_MAX)) * 2 + 7);
	setHandling(((double)rand() / (double)(RAND_MAX)) * 2 + 6);
	setMass(rand() % 40 + 140);
	setOffroad(((double)rand() / (double)(RAND_MAX)) * 1 + 9);
	setVehClass("Cross bike");
	setName("Cross bike ");
	setCylinder(2 * (rand() % 2 + 1));
}
Cross::Cross(Cross &cross)
{
	setAcceleration(cross.getAcceleration());
	setSpeed(cross.getSpeed());
	setBraking(cross.getBraking());
	setHandling(cross.getHandling());
	setMass(cross.getMass());
	setOffroad(cross.getOffroad());
	setVehClass(cross.getVehClass());
	setName(cross.getName());
	setCylinder(cross.getCylinder());
}
Cross::Cross(string &name)
{
	setAcceleration(((double)rand() / (double)(RAND_MAX)) * 1 + 3);
	setSpeed(rand() % 35 + 140);
	setBraking(((double)rand() / (double)(RAND_MAX)) * 2 + 7);
	setHandling(((double)rand() / (double)(RAND_MAX)) * 2 + 6);
	setMass(rand() % 40 + 140);
	setOffroad(((double)rand() / (double)(RAND_MAX)) * 1 + 9);
	setVehClass("Cross bike");
	setName(name);
	setCylinder(2 * (rand() % 2 + 1));
}
void Cross::printVehicleData()
{
	cout << setprecision(1) << fixed << "Nazwa: " << getName() << endl << "Klasa: " << getVehClass() << endl << "Liczba cylindrow: " << getCylinder() << endl << "Predkosc: " << getSpeed() << endl << "Przyspieszenie: " << getAcceleration() << endl << "Masa: " << getMass() << endl << "Przyczepnosc: " << getHandling() << endl << "Hamowanie: " << getBraking() << endl << "Off-road: " << getOffroad() << endl;
}
Cross::~Cross()
{
	cout << "Usunieto motocykl" << endl;
}