#ifndef HAZARD_CLASS
#define HAZARD_CLASS

class Hazard
{
	private: 
		int hazard_ID;
		double radius;
		Position hazard_position;
	public: 
		void set_hazard_id();
		int get_hazard_id();
		void set_radius(double);
		double get_radius();
};

#endif
