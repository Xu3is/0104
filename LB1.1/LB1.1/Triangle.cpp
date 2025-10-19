#include "Triangle.h"
#include <cmath>
#define pi 3.14159265358979323846

void Triangle::NewTriangle(double Side, double AngleA, double AngleB) {
    this->Side = Side;
    this->AngleA = AngleA;
    this->AngleB = AngleB;
}

double Triangle::GetSide() {
    return Side;
}

double Triangle::GetAngleA() {
    return AngleA;
}

double Triangle::GetAngleB() {
    return AngleB;
}
void Triangle::ChangeSide(double multiplier) {
    Side *= multiplier;
}

bool Triangle::IsSimilar(Triangle& tr1, Triangle& tr2) {
    return fabs(tr1.AngleA - tr2.AngleA) < 0.0001 &&
           fabs(tr1.AngleB - tr2.AngleB) < 0.0001;
}

double Triangle::CalculateMedian(int sideChoice) {
    
    double sides[3];
   
    if (!CalculateSides(sides)) return -1.0;
    if (sides[0] + sides[1] <= sides[2] ||
        sides[1] + sides[2] <= sides[0] ||
        sides[0] + sides[2] <= sides[1]) {
        return -1.0;
    }
    double a = sides[0], b = sides[1], c = sides[2];
    if (sideChoice == 2) {
        std::swap(b, c);
    }
    else if (sideChoice == 3) {
        std::swap(a, c);
    }
    else if (sideChoice != 1) {
        return -1.0;
    }
    return 0.5 * sqrt(2 * a * a + 2 * b * b - c * c);
}

bool Triangle::CalculateSides(double sides[3]) {
    double angleC = 180.0 - AngleA - AngleB;
    
    if (angleC <= 0 || AngleA <= 0 || AngleB <= 0) return false;
    
    double radA = AngleA * pi / 180.0;
    double radB = AngleB * pi / 180.0;
    double radC = angleC * pi / 180.0;
    
    sides[2] = Side;
    sides[0] = Side * sin(radA) / sin(radC);
    sides[1] = Side * sin(radB) / sin(radC);
    
    if (sides[0] <= 0 || sides[1] <= 0 || sides[2] <= 0) {
        return false;
    }
    return true;
}