#ifndef HAZARD_AREAS
#define HAZARD_AREAS

#include<vector>
#include "Hazard.h"

class HazardAreas
{
public:
	//Constructor(s)
	HazardAreas();
	
	//Add Hazard
	void addHazard();
	
	//Delete Hazard
	void deleteHazard( int );
	
	//Search Hazards
	Hazard searchHazards( int );
	
	//Display Hazards
	void printHazards();
	
	//Destructor
	~HazardAreas();
	
private:
	vector<Hazard> list;
	int ID;
	int numOfHazards;
};

#endif