#include "Person.h"
#include <iostream>
#include <string>
#include "Student.h"

Student::Student(){
	this->GPA = 0;
	this->Year = 2021;
	this->StudentID = 123;
	this->major = "CS";

	std::cout << "student class call" << std::endl;

}