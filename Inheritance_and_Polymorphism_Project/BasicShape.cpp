#include "BasicShape.h"

// Constructor
BasicShape::BasicShape() : area(0.0), name("") {}

// Accessor implementations
double BasicShape::getArea() const {
    return area;
}

std::string BasicShape::getName() const {
    return name;
}

// Mutator implementations
void BasicShape::setArea(double a) {
    area = a;
}

void BasicShape::setName(std::string n) {
    name = n;
}

// Virtual destructor
BasicShape::~BasicShape() {}
