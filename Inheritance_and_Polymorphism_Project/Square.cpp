#include "Square.h"

// Constructor
// Calls Rectangle constructor with side for both length and width
Square::Square(double s, std::string n)
    : Rectangle(s, s), side(s) {
    // Override the name set by Rectangle constructor
    setName(n);  // Call BasicShape setter to store name
    // No need to call calcArea() again - Rectangle constructor already did it
    // and since side = length = width, the area calculation is correct
}

// Accessor implementation
double Square::getSide() const {
    return side;
}
