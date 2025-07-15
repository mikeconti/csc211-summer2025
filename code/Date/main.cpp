#include <iostream>
#include "Point2D.h"

int main()
{

    Point myPt;

    myPt.setX(10);
    myPt.setY(20);
    myPt.setZ(30);

    Point myPt2(3, 10, 15);

    int myX = myPt.getX();

    std::cout << myX << std::endl;

    std::cout << myPt.toCord() << std::endl;
    std::cout << myPt2.toCord() << std::endl;



return 0;
}