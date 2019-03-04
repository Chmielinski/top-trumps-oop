#include "Car.h"

using namespace std;

Car::Car()
{
	setAcceleration(10.0);
	setSpeed(0);
	setBraking(5.0);
	setHandling(5.0);
	setMass(0);
	setOffroad(5.0);
	setVehClass("Car");
	setName("Unknown");
	setCylinder(1);
}
Car::Car(Car &car)
{
	setAcceleration(car.getAcceleration());
	setSpeed(car.getSpeed());
	setBraking(car.getBraking());
	setHandling(car.getHandling());
	setMass(car.getMass());
	setOffroad(car.getOffroad());
	setVehClass(car.getVehClass());
	setName(car.getName());
	setCylinder(car.getCylinder());
}
Car::Car(string &name)
{
	setAcceleration(10.0);
	setSpeed(0);
	setBraking(5.0);
	setHandling(5.0);
	setMass(0);
	setOffroad(5.0);
	setVehClass("Car");
	setName("Car ");
	setCylinder(1);
}
void Car::printVehicleData()
{
}

Car::~Car()
{
	cout << "Usunieto samochod" << endl;
}

//----

Sport::Sport()
{
	setAcceleration(((double)rand() / (double)(RAND_MAX)) * 2 + 4);
	setSpeed(rand() % 50 + 250);
	setBraking(((double)rand() / (double)(RAND_MAX)) * 2 + 5);
	setHandling(((double)rand() / (double)(RAND_MAX)) * 2 + 6);
	setMass(rand() % 250 + 1100);
	setOffroad(((double)rand() / (double)(RAND_MAX)) * 2 + 4);
	setVehClass("Sports Car");
	setName("Sports Car ");
	setCylinder(2 * (rand() % 3 + 4));
}
Sport::Sport(Sport &sport)
{
	setAcceleration(sport.getAcceleration());
	setSpeed(sport.getSpeed());
	setBraking(sport.getBraking());
	setHandling(sport.getHandling());
	setMass(sport.getMass());
	setOffroad(sport.getOffroad());
	setVehClass(sport.getVehClass());
	setName(sport.getName());
	setCylinder(sport.getCylinder());
}
Sport::Sport(string name)
{
	setAcceleration(((double)rand() / (double)(RAND_MAX)) * 2 + 4);
	setSpeed(rand() % 50 + 250);
	setBraking(((double)rand() / (double)(RAND_MAX)) * 2 + 5);
	setHandling(((double)rand() / (double)(RAND_MAX)) * 2 + 6);
	setMass(rand() % 250 + 1100);
	setOffroad(((double)rand() / (double)(RAND_MAX)) * 2 + 4);
	setVehClass("Sports Car");
	setName(name);
	setCylinder(2 * (rand() % 3 + 4));
}
void Sport::printVehicleData()
{
	cout << setprecision(1) << fixed << "Nazwa: " << getName() << endl << "Klasa: " << getVehClass() << endl << "Liczba cylindrow: " << getCylinder() << endl << "Predkosc: " << getSpeed() << endl << "Przyspieszenie: " << getAcceleration() << endl << "Masa: " << getMass() << endl << "Przyczepnosc: " << getHandling() << endl << "Hamowanie: " << getBraking() << endl << "Off-road: " << getOffroad() << endl;
}

Sport::~Sport()
{
	cout << "Usunieto samochod" << endl;
}



//---

Family::Family()
{
	setAcceleration(((double)rand() / (double)(RAND_MAX)) * 2 + 8);
	setSpeed(rand() % 50 + 175);
	setBraking(((double)rand() / (double)(RAND_MAX)) * 2 + 3);
	setHandling(((double)rand() / (double)(RAND_MAX)) * 2 + 3);
	setMass(rand() % 250 + 1730);
	setOffroad(((double)rand() / (double)(RAND_MAX)) * 2 + 4);
	setVehClass("Family Car");
	setName("Family Car ");
	setCylinder(2 * (rand() % 2 + 2));
}
Family::Family(Family &family)
{
	setAcceleration(family.getAcceleration());
	setSpeed(family.getSpeed());
	setBraking(family.getBraking());
	setHandling(family.getHandling());
	setMass(family.getMass());
	setOffroad(family.getOffroad());
	setVehClass(family.getVehClass());
	setName(family.getName());
	setCylinder(family.getCylinder());
}
Family::Family(string &name)
{
	setAcceleration(((double)rand() / (double)(RAND_MAX)) * 2 + 8);
	setSpeed(rand() % 50 + 175);
	setBraking(((double)rand() / (double)(RAND_MAX)) * 2 + 3);
	setHandling(((double)rand() / (double)(RAND_MAX)) * 2 + 3);
	setMass(rand() % 250 + 1730);
	setOffroad(((double)rand() / (double)(RAND_MAX)) * 2 + 4);
	setVehClass("Family Car");
	setName(name);
	setCylinder(2 * (rand() % 2 + 2));
}
void Family::printVehicleData()
{
	cout << setprecision(1) << fixed << "Nazwa: " << getName() << endl << "Klasa: " << getVehClass() << endl << "Liczba cylindrow: " << getCylinder() << endl << "Predkosc: " << getSpeed() << endl << "Przyspieszenie: " << getAcceleration() << endl << "Masa: " << getMass() << endl << "Przyczepnosc: " << getHandling() << endl << "Hamowanie: " << getBraking() << endl << "Off-road: " << getOffroad() << endl;
}

Family::~Family()
{
	cout << "Usunieto samochod" << endl;
}

//---

Offroad::Offroad()
{
	setAcceleration(((double)rand() / (double)(RAND_MAX)) * 2 + 7);
	setSpeed(rand() % 35 + 135);
	setBraking(((double)rand() / (double)(RAND_MAX)) * 2 + 5);
	setHandling(((double)rand() / (double)(RAND_MAX)) * 2 + 4.5);
	setMass(rand() % 500 + 1500);
	setOffroad(((double)rand() / (double)(RAND_MAX)) * 1 + 9);
	setVehClass("Off-road car");
	setName("Off-road car ");
	setCylinder(2 * (rand() % 3 + 2));
}
Offroad::Offroad(Offroad &offroad)
{
	setAcceleration(offroad.getAcceleration());
	setSpeed(offroad.getSpeed());
	setBraking(offroad.getBraking());
	setHandling(offroad.getHandling());
	setMass(offroad.getMass());
	setOffroad(offroad.getOffroad());
	setVehClass(offroad.getVehClass());
	setName(offroad.getName());
	setCylinder(offroad.getCylinder());
}
Offroad::Offroad(string &name)
{
	setAcceleration(((double)rand() / (double)(RAND_MAX)) * 2 + 7);
	setSpeed(rand() % 35 + 135);
	setBraking(((double)rand() / (double)(RAND_MAX)) * 2 + 5);
	setHandling(((double)rand() / (double)(RAND_MAX)) * 2 + 4.5);
	setMass(rand() % 500 + 1500);
	setOffroad(((double)rand() / (double)(RAND_MAX)) * 1 + 9);
	setVehClass("Off-road car");
	setName(name);
	setCylinder(2 * (rand() % 3 + 2));
}
void Offroad::printVehicleData()
{
	cout << setprecision(1) << fixed << "Nazwa: " << getName() << endl << "Klasa: " << getVehClass() << endl << "Liczba cylindrow: " << getCylinder() << endl << "Predkosc: " << getSpeed() << endl << "Przyspieszenie: " << getAcceleration() << endl << "Masa: " << getMass() << endl << "Przyczepnosc: " << getHandling() << endl << "Hamowanie: " << getBraking() << endl << "Off-road: " << getOffroad() << endl;
}

Offroad::~Offroad()
{
	cout << "Usunieto samochod" << endl;
}

//---

Race::Race()
{
	setAcceleration(((double)rand() / (double)(RAND_MAX)) * 1 + 2.5);
	setSpeed(rand() % 50 + 300);
	setBraking(((double)rand() / (double)(RAND_MAX)) * 2 + 8);
	setHandling(((double)rand() / (double)(RAND_MAX)) * 2 + 8);
	setMass(rand() % 250 + 680);
	setOffroad(((double)rand() / (double)(RAND_MAX)) * 2);
	setVehClass("Race Car");
	setName("Race Car ");
	setCylinder(2 * (rand() % 3 + 4));
}
Race::Race(Race &race)
{
	setAcceleration(race.getAcceleration());
	setSpeed(race.getSpeed());
	setBraking(race.getBraking());
	setHandling(race.getHandling());
	setMass(race.getMass());
	setOffroad(race.getOffroad());
	setVehClass(race.getVehClass());
	setName(race.getName());
	setCylinder(race.getCylinder());
}
Race::Race(string &name)
{
	setAcceleration(((double)rand() / (double)(RAND_MAX)) * 1 + 2.5);
	setSpeed(rand() % 50 + 300);
	setBraking(((double)rand() / (double)(RAND_MAX)) * 2 + 8);
	setHandling(((double)rand() / (double)(RAND_MAX)) * 2 + 8);
	setMass(rand() % 250 + 680);
	setOffroad(((double)rand() / (double)(RAND_MAX)) * 2);
	setVehClass("Race Car");
	setName(name);
	setCylinder(2 * (rand() % 3 + 4));
}
void Race::printVehicleData()
{
	cout << setprecision(1) << fixed << "Nazwa: " << getName() << endl << "Klasa: " << getVehClass() << endl << "Liczba cylindrow: " << getCylinder() << endl << "Predkosc: " << getSpeed() << endl << "Przyspieszenie: " << getAcceleration() << endl << "Masa: " << getMass() << endl << "Przyczepnosc: " << getHandling() << endl << "Hamowanie: " << getBraking() << endl << "Off-road: " << getOffroad() << endl;
}

Race::~Race()
{
	cout << "Usunieto samochod" << endl;
}