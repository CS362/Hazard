#ifndef POSITION_H
#define POSITION_H

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
};


#endif 	//POSITION_H