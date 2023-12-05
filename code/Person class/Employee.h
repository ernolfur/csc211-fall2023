#include <iostream>
#include <string>

//Parent header files
#include "Person.h"
#include "Student.h"

#ifndef Employee_h
#define Employee_h

class Employee {

	public: 
		int salary, yearsWorking;
		std::string job;

		Employee();
		void print();


};

#endif
