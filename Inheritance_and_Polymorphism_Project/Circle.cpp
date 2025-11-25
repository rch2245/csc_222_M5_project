#include "Circle.h"



const double PI = 3.14159265358979323846;

// Constructor
Circle::Circle(double x, double y, double r, std::string n)
    : xCenter(x), yCenter(y), radius(r) {
    setName(n);     // Call base class setter to store name
    calcArea();     // Calculate and store area
}

// Accessor implementations
double Circle::getXCenter() const {
    return xCenter;
}

double Circle::getYCenter() const {
    return yCenter;
}

double Circle::getRadius() const {
    return radius;
}

// Implementation of calcArea
void Circle::calcArea() {
    double area = PI * radius * radius;
    setArea(area);  // Call base class setter to store area
}
