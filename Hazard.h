#ifndef HAZARD_CLASS
#define HAZARD_CLASS
#include<string>
using namespace std;
class Hazard
{
	private: 
		int ID;
		double radius;
		Position hazard_position;
		string type;
		
	public: 
		void set_hazard_id(int);
		int get_hazard_id();
		void set_radius(double);
		double get_radius();
		void set_type(string);
		string get_type();
		
};

#endif
