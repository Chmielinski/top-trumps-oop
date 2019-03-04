#pragma once
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

class Vehicle
{
protected:
	string name;
	string vehclass;
	unsigned int cylinder;
	unsigned int speed;
	double acceleration;
	double handling;
	double braking;
	unsigned int mass;
	double offroad;
public:
	Vehicle();
	Vehicle(string &name);
	Vehicle(Vehicle &vehicle);
	string getName()
	{
		return name;
	}
	string getVehClass()
	{
		return vehclass;
	}
	int getCylinder()
	{
		return cylinder;
	}
	int getSpeed()
	{
		return speed;
	}
	double getAcceleration()
	{
		return acceleration;
	}
	double getHandling()
	{
		return handling;
	}
	double getBraking()
	{
		return handling;
	}
	int getMass()
	{
		return mass;
	}
	double getOffroad()
	{
		return offroad;
	}
	void setName(string name)
	{
		this->name = name;
	}
	void setVehClass(string vehclass)
	{
		this->vehclass = vehclass;
	}
	void setCylinder(int cylinder)
	{
		this->cylinder = cylinder;
	}
	void setSpeed(int speed)
	{
		this->speed = speed;
	}
	void setAcceleration(double acceleration)
	{
		this->acceleration = acceleration;
	}
	void setHandling(double handling)
	{
		this->handling = handling;
	}
	void setBraking(double braking)
	{
		this->braking = braking;
	}
	void setMass(int mass)
	{
		this->mass = mass;
	}
	void setOffroad(double offroad)
	{
		this->offroad = offroad;
	}
	virtual void printVehicleData();
	~Vehicle();
};


ostream& operator<<(ostream& out, Vehicle* vehicle);