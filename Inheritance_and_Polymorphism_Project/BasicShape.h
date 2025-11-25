#ifndef BASICSHAPE_H
#define BASICSHAPE_H

#include <string>

// Abstract base class with pure virtual function
class BasicShape {
private:
    double area;
    std::string name;

public:
    // Constructor
    BasicShape();

    // Accessors
    double getArea() const;
    std::string getName() const;

    // Mutators
    void setArea(double a);
    void setName(std::string n);

    // Pure virtual function - makes this an abstract class
    // Derived classes must implement this
    virtual void calcArea() = 0;

    // Virtual destructor for proper cleanup
    virtual ~BasicShape();
};

#endif
