#pragma once
class Triangle
{
private:
	double Side;
	double AngleA;
	double AngleB;
public:
	void init(double Side, double AngleA, double AngleB);
	int GetSide();
	double GetAngleA();
	double GetAngleB();
	int ChangeSide(double mul);
	bool IsSimilar(Triangle& tr1, Triangle& tr2);
};

