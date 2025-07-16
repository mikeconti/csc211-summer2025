#include <iostream>
#include <string>
#include <cmath>

// Modify Point2D.cpp (on GitHub at ~/code) so it includes the following:
// Default Constructor
// Parameterized Constructor 

// Once working, break it up into:
// Class file (Point2D.cpp)
// Header/Interface file (Point2D.h)
// Driver (main.cpp)

class Point {
    int x;
    int y;
    int z;
    
    public:
        // Default constructor  //TODO 
        Point();

        //Constructs a point object with X, Y, Z properties //TODO
        Point(int someX, int someY, int someZ);

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
        
};

//Constructs a point object with X, Y, Z properties
//TODO 

Point::Point(){

    x = 0;
    y = 0;
    z = 0;

}


Point::Point(int someX, int someY, int someZ){

    this->x = someX;
    this->y = someY;
    this->z = someZ;

    std::cout << "This point lives at " << this << std::endl;

}


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

int main()
{

    Point myPoint(10, 20, 30);

    Point yourPoint(9, 8, 7);




return 0;
}