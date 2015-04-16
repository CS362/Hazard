#include "HazardAreas.h"

//Constructor(s)
HAZARD_AREAS::HazardAreas()
{
	vector<Hazard> list;
	ID = 1000;
	numOfHazards = 0;
}
	
//Add Hazard
void HAZARD_AREAS::addHazard()
{
	//create a hazard;
	Hazard hazard;
	
	bool found = false;
	int traverse = 0;
	
	while (!found && traverse < numOfHazards)
	{
		if ( hazard.get_position() == list.at(traverse).get_position() )
		{
			found = true;
		}
		else
			traverse++;
	}
	
	if (!found)
	{
		hazard.set_hazard_id(ID);
		ID++;
		numOfHazards++;
		list.push_back(hazard);
	}
	else
		cerr << "\nHazard already exists at that position." << endl;
	
}

//Delete Hazard
void HAZARD_AREAS::deleteHazard( int num )
{
	bool found = false;
	int traverse = 0;
	
	while (!found && traverse < numOfHazards)
	{
		if ( num == list.at(traverse).get_hazard_id() )
		{
			list.erase(list.begin() + (traverse-1));
			numOfHazards--;
			found = true;
		}
		else
		{
			traverse++;
		}
	}
	
	if (found)
	{
		cout << "\nDeleted." << endl;
	}
	else if ( traverse >= numOfHazards )
	{
		cerr << "\nID not found." << endl;
	}
	else
		cerr << "\nERROR CODE 1337. Nothing exists." << endl;
}

//Search Hazards
Hazard HAZARD_AREAS::searchHazards( int num )
{
	bool found = false;
	int traverse = 0;
	
	while (!found && traverse < numOfHazards)
	{
		if ( num == list.at(traverse).get_hazard_id() )
		{
			found = true;
		}
		else
		{
			traverse++;
		}
	}
	
	if (found)
		return list.at(traverse);
	else if ( traverse >= numOfHazards )
		cerr << "\nID not found." << endl;
	else
		cerr << "\nERROR CODE 9001. Out of bounds." << endl;
}

//Display Hazards
void HAZARD_AREAS::printHazards()
{
	int traverse = 0;
	
	while ( traverse < numOfHazards )
	{
		cout << "Hazard ID:" << list.at(traverse).get_hazard_id()
			<< "\n\tType: " << list.at(traverse).get_type()
			<< "\n\tPosition: " 
			<< "\n\t\tLatitude: " << list.at(traverse).get_position().getLatitude()
			<< "\n\t\tLongitude: " << list.at(traverse).get_position().getLongitude()
			<< "\n\tRadius: " << list.at(traverse).get_radius() << endl;

		cout << endl;
		traverse++;
	}
}

//Destructor
HAZARD_AREAS::~HazardAreas()
{
	while (list.size() != 0)
	{
		list.pop_back();
	}
}