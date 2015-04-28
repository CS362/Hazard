#ifndef POSITION_H
#define POSITION_H

#include<iostream>
using namespace std;

class Position
{
private:
	double Latitude;
	double Longitude;
public:
	Position();
	Position(double x_long, double y_lat);
	double getLatitude();
	double getLongitude();
	void setLatitude(double y);
	void setLongitude(double x);	
	Position& operator=(const Position&);
	
	friend ostream& operator<<(ostream&, const Position&);
};


#endif 	//POSITION_H