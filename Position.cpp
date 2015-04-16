#include "Position.h"

//constructors
Position::Position()
{
	Latitude = 0;
	Longitude = 0;
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

//overload =(assignment) operator

Position& Position::operator=(const Position& right)
{
	if(this == &right)
		return *this;

	Latitude = right.getLatitude();
	Longitude = right.getLongitude();

	return *this;
	

}