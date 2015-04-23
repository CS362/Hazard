#include "Hazard.h"
#include<string>
#include<iostream>

using namespace std;
Hazard::Hazard()
{
	Position newPos;
	int latitude, longitude;
	cout << "Enter the radius of the of the hazard: ";
	cin  >> radius;
	
	
	//make function to display table of options for types of hazards
	cout << endl << "Enter the type of the hazard: ";
	//displayList of hazard types
	cin  >> type;
	
	cout << "Enter the latitude of the hazard: ";
	cin  >> latitude;
	
	cout << "Enter the longitude of the hazard: ";
	cin  >> longitude;
	
	
	/* may need to to change set names. */
	newPos.setLatitude(latitude);   
	newPos.setLatitude(longitude);
	
	//operator needs to be overloaded
	hazard_position = newPos;
}

void Hazard::set_hazard_id(int hazard_id)
{
	ID = hazard_id;
}

int Hazard::get_hazard_id()
{
	return ID;
}

void ::Hazard::set_radius(double hazard_radius)
{
	radius = hazard_radius;
}

double Hazard::get_radius()
{
	return radius;
}

void Hazard::set_type(string hazard_type)
{
	type = hazard_type;
}

string Hazard::get_type()
{
	return type;
}

Position Hazard::get_position(){
	return hazard_position;
}
