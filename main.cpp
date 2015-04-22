#include <iostream>
#include "HazardAreas.H"
int main(int argc, char** argv) {
	cout<<"Creating Hazard Areas"<<endl;
	HazardAreas myAreas;
	
	cout<<"Creating 100 Hazards"<<endl;
	for(int i = 0; i < 100; i++){
		myAreas.addHazard();
	}
	
	cout<<"searching for Hazard ID 1000"<<endl;
	myAreas.searchHazards(1000);
	
	cout<<"print all hazards"<<endl;
	myAreas.printHazards();
	
	cout<<"Deleting 100 Hazards"<<endl;
	for(int i = 0; i < 100; i++){
		myAreas.deleteHazard(i+1000);
	}		
			
	return 0;
}
