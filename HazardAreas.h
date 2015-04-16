#ifndef HAZARD_AREAS
#define HAZARD_AREAS

#include<vector>
#include "Hazard.h"

class HAZARD_AREAS
{
public:
	//Constructor(s)
	HazardAreas();
	
	//Add Hazard
	void addHazard();
	
	//Delete Hazard
	void deleteHazard( int );
	
	//Search Hazards
	void searchHazards( int );
	
	//Display Hazards
	void printHazards();
	
	//Destructor
	~HazardAreas();
	
private:
	vector<Hazard> list;
	static int ID;
	static int numOfHazards;
};

#endif