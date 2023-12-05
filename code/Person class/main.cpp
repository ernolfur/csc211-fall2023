#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Employee.h"


// g++ main.cpp Person/Person.cpp Student/Student.cpp Employee/Employee.cpp -o temp

int main(){

    Employee mike;
    mike.print();

    return 0;
}