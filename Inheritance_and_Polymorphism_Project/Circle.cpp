#include "Circle.h"
#define _USE_MATH_DEFINES
#include <cmath>

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
    double area = M_PI * radius * radius;
    setArea(area);  // Call base class setter to store area
}
