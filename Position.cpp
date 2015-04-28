#include "Position.h"
#include <cstdlib>
#include <iostream>

using namespace std;

//constructors
Position::Position()
{
	double rand_lat = rand() % 181;
	double rand_long = rand() % 361;
	if(rand_lat > 90)
	{
		rand_lat = rand_lat /2.0 *-1;
	}
	if(rand_long >180)
	{
		rand_long = rand_long/2.0 *-1;
	}

	Latitude = rand_lat;
	Longitude = rand_long;
}

Position::Position(double x_long, double y_lat)
{
	Longitude = x_long;
	Latitude = y_lat;
}

//SET functions
void Position::setLatitude(double y)
{
	Latitude = y;
}

void Position::setLongitude(double x)
{
	Longitude = x;
}

//GET functions
double Position::getLatitude()
{
	return Latitude;
}

double Position::getLongitude()
{
	return Longitude;
}

//overloaded operators
Position& Position::operator=(const Position& p)
{
	Latitude = p.Latitude;
	Longitude = p.Longitude;

	return *this;
}

ostream& operator<<(ostream& out, Position &p)
{
	out << "Latitude:\t" << p.getLatitude() << endl
	    << "Longitude:\t" << p.getLongitude() << endl;
	return out;
}