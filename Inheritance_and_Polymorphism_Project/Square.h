#ifndef SQUARE_H
#define SQUARE_H

#include "Rectangle.h"

class Square : public Rectangle {
private:
    double side;

public:
    // Constructor with default parameter for name
    Square(double s, std::string n = "Square");

    // Accessor
    double getSide() const;
};

#endif
