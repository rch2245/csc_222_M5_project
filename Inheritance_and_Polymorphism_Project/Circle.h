#ifndef CIRCLE_H
#define CIRCLE_H

#include "BasicShape.h"

class Circle : public BasicShape {
private:
    double xCenter;
    double yCenter;
    double radius;

public:
    // Constructor with default parameter for name
    Circle(double x, double y, double r, std::string n = "Circle");

    // Accessors
    double getXCenter() const;
    double getYCenter() const;
    double getRadius() const;

    // Implementation of pure virtual function from BasicShape
    void calcArea() override;
};

#endif
