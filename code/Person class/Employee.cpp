#include <iostream>
#include <string>
#include "Employee.h"

//Parent header files
#include "Person.h"
#include "Student.h"


Employee::Employee(){
	this->salary = 100000;
	this->yearsWorking = 3;
	this->job = "Software Engineer";
	std::cout << "employee class call" << std::endl;

}


void Employee::print(){

	std::cout << std::endl;

	std::cout << "Members from Person Class" << std::endl;

	std::cout << "Name = " << this->name << std::endl;
	std::cout << "Birthday = " << this->birthday << std::endl;
	std::cout << "Color = " << this->color << std::endl;
	std::cout << "Age = " << this->age << std::endl;

	std::cout << std::endl;

	std::cout << "Members from Student Class" << std::endl;

	std::cout << "StudentID = " <<  this->StudentID << std::endl;
	std::cout << "Major = " <<  this->major << std::endl;
	std::cout << "GPA = " <<  this->GPA << std::endl;

	std::cout << std::endl;

	std::cout <<"Salary = " <<  this->salary << std::endl;
	std::cout <<"Years Working = " <<  this->yearsWorking << std::endl;
	std::cout << "Job = " << this->job << std::endl;

}