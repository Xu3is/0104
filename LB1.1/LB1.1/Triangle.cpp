#include "Triangle.h"

void Triangle::init(double Side, double AngleA, double AngleB) {
	this->Side = Side;
	this->AngleA = AngleA;
	this->AngleB = AngleB;
}
int Triangle::GetSide() {
	return Side;
}
double Triangle::GetAngleA() {
	return AngleA;
}
double Triangle::GetAngleB() {
	return AngleB;
}
int Triangle::ChangeSide(double mul) {
	return Side*=mul;
}
bool Triangle::IsSimilar(Triangle& tr1, Triangle& tr2) {
	
}