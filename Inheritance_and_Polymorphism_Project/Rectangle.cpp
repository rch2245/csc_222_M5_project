#include "Rectangle.h"

// Constructor
Rectangle::Rectangle(double l, double w, std::string n)
    : length(l), width(w) {
    setName(n);     // Call base class setter to store name
    calcArea();     // Calculate and store area
}

// Accessor implementations
double Rectangle::getLength() const {
    return length;
}

double Rectangle::getWidth() const {
    return width;
}

// Implementation of calcArea
void Rectangle::calcArea() {
    double area = length * width;
    setArea(area);  // Call base class setter to store area
}
