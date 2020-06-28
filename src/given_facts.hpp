#include "headers.hpp"
#include "./definition/mass.hpp"
#include "./definition/velocity.hpp"
#include "./definition/angular_calculations.hpp"

/*

CREATE AN INTERACTIVE USER EXPERIENCE BY Q/A

*/

int get_string(char *str);
int get_double(double &d);
int get_int(int &i);
int get_char(char &c);

void qa_exec() {

//	char *str;
//	get_string(str, "Enter a string: ");
	Mass mass_of_object;
	double _mass = 0;

	get_double(&_mass, "Enter the mass: ");
	mass_of_object.mass = _mass;

	double initial_angle = 0;
	get_double(&initial_angle, "Enter the launch angle: ");

	double initial_speed = 0;
	get_double(&initial_speed, "Enter the initial positive speed: ");

	
	Velocity vertical_initial_velocity = Velocity((const double)vertical_initial_velocity(initial_speed, initial_angle));
	Velocity horizontal_initial_velocity = Velocity((const double)horizontal_initial_velocity(initial_speed, initial_angle));


	

}

int get_string(char *&str, std::string enquiry) {
	
	std::string buffer;

	std::cout << enquiry << std::endl;
	std::cin >> buffer;

	str = buffer.c_str();

	return 0;
}

int get_double(double &d, std::string enquiry) {
	
	std::string buffer;

	std::cout << enquiry << std::endl;
	std::cin >> buffer;

	d = strtod(buffer);
	return 0;

}

int get_int(int &i, std::string enquiry) {
	
	std::string buffer;

	std::cout << enquiry << std::Endl;
	std::cin >> buffer;

	i = atoi(buffer.c_str());

	return 0;

}

int get_char(char &c, std::string enquiry) {

	std::string buffer;

	std::cout << enquiry << std::endl;
	std::cin >> buffer;
	
	c = buffer.c_str()[0];
	
	return 0;
}


