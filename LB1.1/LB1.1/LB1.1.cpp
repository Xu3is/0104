#include <iostream>
#include "Triangle.h"

int main()
{
    Triangle testTriangle;
    testTriangle.init(50, 50.0, 20.0);

    std::cout << testTriangle.GetSide() << std::endl;
}


