#include "Hazard.h"
#include<string>

using namespace std;
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
