#include <iostream>
#include "Person.h"

		Person::Person(){
		
		this->name = "John Doe";
		this->color = "Yellow";
		this->birthday = "12/30";
		this->age = 50;

		std::cout << std::endl;
		std::cout << "base class call" << std::endl;

		}

		int Person::getAge(){
			return this->age;
		}