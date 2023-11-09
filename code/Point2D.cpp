#include <iostream>
#include <string>
#include <cmath>

class Point {
    int x;
    int y;
    int z;
    
    public:
        // Default constructor  //TODO 

        //Constructs a point object with X, Y, Z properties //TODO

        //Sets the X, Y, and Z properties of a point Object
        void setX(int someX);
        void setY(int someY);
        void setZ(int someZ);
        
        //Gets the X, Y, and Z properties from a point Object
        int getX();
        int getY();
        int getZ();
        
        //Returns a cartesian coordinate representation of a point Object
        // aka = (x,y,z)
        std::string toCord();
        
        //Calculates the Euclidean Distance of two points
        double euDistance (Point p2);
};

//Default Constructor
//TODO

//Constructs a point object with X, Y, Z properties
//TODO

//Sets the X, Y, and Z properties of a point Object
void Point::setX(int someX){
    x = someX;
}
void Point::setY(int someY){
    y = someY;
}
void Point::setZ(int someZ){
    z = someZ;
}

//Gets the X, Y, and Z properties from a point Object
int Point::getX(){
    return x;
}
int Point::getY(){
    return y;
}
int Point::getZ(){
    return z;
}

//Returns a cartesian coordinate representation of a point Object
// aka = (x,y,z)
std::string Point::toCord()
{
    std::string coords = "(" + std::to_string(x) + "," +  std::to_string(y) + "," +  std::to_string(z) + ")";
    return coords;
}
        
//Calculates the Euclidean Distance of two points        
double Point::euDistance (Point p2) {
    double eudistance = 0;
    double xdistance = abs(x - p2.getX());
    double ydistance = abs(y - p2.getY());
    double zdistance = abs(z - p2.getZ());
    eudistance = sqrt((xdistance * xdistance) + (ydistance * ydistance) + (zdistance * zdistance));
    return eudistance;
}

int main()
{

    Point myPt(10, 5, 8);
    Point myPt2(3, 10, 15);
    Point myPt3();

    int myX = myPt.getX();

    std::cout << myX << std::endl;

    std::cout << myPt.toCord() << std::endl;

    myPt.setX(3);

    std::cout << myPt.toCord() << std::endl;

    std::cout << myPt.euDistance(myPt2) << std::endl;

return 0;
}