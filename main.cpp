#include <iostream>
#include "HazardAreas.h"

void display_menu();

int main(int argc, char** argv) {
	int choice = -1;
	
	HazardAreas myAreas;
	
	while (choice != 6){
		display_menu();
		cin>>choice;
		if(choice == 1){
			cout<<"Creating 1 Hazard Area"<<endl;
			myAreas.addHazard();
		}
		if(choice == 2){
			int ID;
			cout<<"Enter ID of area to be deleted:";
			cin>>ID;
			myAreas.deleteHazard(ID);
		}
		if(choice == 3){
			int ID;
			cout<<"Enter ID of area to be found:";
			cin>>ID;
			myAreas.searchHazards(ID);
		}
		if(choice == 4){
			cout<<"Printing all hazards"<<endl;
			myAreas.printHazards();
		}
		if(choice == 5){			
			cout<<"Creating 10 Hazard Areas"<<endl;
			for(int i = 0; i < 3; i++){
				
				cout<<endl<<"Creating Hazard Area "<<i+1000<<endl;
				myAreas.addHazard();
			}
			
			cout<<"Searching for 1st Hazard Area (ID: 1000)"<<endl;
			Hazard temp = myAreas.searchHazards(1000);
			cout<<"Type of hazard: "<<temp.get_type()<<endl;
			
			cout<<"Searching for last Hazard Area (ID: 1002)"<<endl;
			Hazard temp2 = myAreas.searchHazards(1002);
			cout<<"Type of hazard: "<<temp.get_type()<<endl;
			
			cout<<"Printing all hazards"<<endl;
			myAreas.printHazards();
			
			cout<<"Deleting all hazards"<<endl;
			for(int i = 0; i < 3; i++){
				myAreas.deleteHazard(i+1000);
			}
			cout<<"Auto Test Complete"<<endl;
		}			
	}
			
	return 0;
}

void display_menu(){
	cout<<endl;
	cout<<"Hazard Unit Module Testing Interface"<<endl;
	cout<<"1: Create a Hazard Area"<<endl;
	cout<<"2: Delete a Hazard Area"<<endl;
	cout<<"3: Search for a Hazard Area"<<endl;
	cout<<"4: Print All Hazard Areas"<<endl;
	cout<<"5: Auto Test All Functions"<<endl;
	cout<<"6: Exit"<<endl;
}
