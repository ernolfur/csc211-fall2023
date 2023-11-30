#include "Date.h"
#include <iostream>


void Date::print() {
    std::cout << month << '-' 
            << day << '-' 
            << year << std::endl;
}


void Date::set(int m, int d, int y) {
    month = m;
    day = d;
    year = y;
}

