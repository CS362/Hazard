#include "Position.h"
#include <cstdlib>

using namespace std;

//constructors
Position::Position()
{
	int rand_lat = rand() % 181;
	int rand_long = rand() % 361;
	if(rand_lat > 90)
	{
		rand_lat = rand_lat /2 *-1;
	}
	if(rand_long >180)
	{
		rand_long = rand_long/2 *-1;
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