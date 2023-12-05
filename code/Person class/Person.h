#include <iostream>

#ifndef Person_h
#define Person_h

class Person {

	public: 
		std::string name;
		std::string color;
		std::string birthday;
		int age;

		Person();

		int getAge();

};

#endif
