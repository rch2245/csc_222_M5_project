#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "BasicShape.h"

class Rectangle : public BasicShape {
private:
    double length;
    double width;

public:
    // Constructor with default parameter for name
    Rectangle(double l, double w, std::string n = "Rectangle");

    // Accessors
    double getLength() const;
    double getWidth() const;

    // Implementation of pure virtual function from BasicShape
    void calcArea() override;
};

#endif
