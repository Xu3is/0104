#pragma once
#include <vector>


class Triangle {
private:
    double Side;    
    double AngleA;  
    double AngleB;  
public:
    double GetSide();
    double GetAngleA();
    double GetAngleB();
    void NewTriangle(double Side, double AngleA, double AngleB);
    void ChangeSide(double multiplier);
    bool IsSimilar(Triangle& tr1, Triangle& tr2);
    double CalculateMedian(int sideChoice); 
    bool CalculateSides(double sides[3]);   
};