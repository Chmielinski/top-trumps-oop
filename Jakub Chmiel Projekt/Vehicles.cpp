#include <iostream>
#include <string>
#include "Vehicles.h"

Vehicle::Vehicle()
{
	setAcceleration(10.0);
	setSpeed(0);
	setBraking(5.0);
	setHandling(5.0);
	setMass(0);
	setOffroad(5.0);
	setVehClass("Unknown");
	setName("Unknown");
	setCylinder(1);
}
Vehicle::Vehicle(string &name)
{
	setAcceleration(10.0);
	setSpeed(0);
	setBraking(5.0);
	setHandling(5.0);
	setMass(0);
	setOffroad(5.0);
	setVehClass("Unknown");
	setName(name);
	setCylinder(1);
}
Vehicle::Vehicle(Vehicle &vehicle)
{
	setAcceleration(vehicle.getAcceleration());
	setSpeed(vehicle.getSpeed());
	setBraking(vehicle.getBraking());
	setHandling(vehicle.getHandling());
	setMass(vehicle.getMass());
	setOffroad(vehicle.getOffroad());
	setVehClass(vehicle.getVehClass());
	setName(vehicle.getName());
	setCylinder(vehicle.getCylinder());
}
void Vehicle::printVehicleData()
{
}
Vehicle::~Vehicle()
{
	cout << "Usunieto pojazd." << endl;
}

ostream &operator<<(ostream &out, Vehicle* vehicle)
{
	out << setprecision(1) << fixed << "Nazwa: " << vehicle->getName() << endl << "Klasa: " << vehicle->getVehClass() << endl << endl << "(1) Liczba cylindrow: " << vehicle->getCylinder() << endl << "(2) Predkosc: " << vehicle->getSpeed() << endl << "(3) Przyspieszenie: " << vehicle->getAcceleration() << endl << "(4) Masa: " << vehicle->getMass() << endl << "(5) Przyczepnosc: " << vehicle->getHandling() << endl << "(6) Hamowanie: " << vehicle->getBraking() << endl << "(7) Off-road: " << vehicle->getOffroad() << endl;
	return out;
}