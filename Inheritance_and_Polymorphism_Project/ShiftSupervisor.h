#ifndef SHIFTSUPERVISOR_H
#define SHIFTSUPERVISOR_H

#include "Employee.h"

class ShiftSupervisor : public Employee {
private:
    double annualSalary;
    double annualProductionBonus;

public:
    // Constructors
    ShiftSupervisor();
    ShiftSupervisor(std::string n, int num, std::string date, double salary, double bonus);

    // Accessors
    // Precondition: None
    // Postcondition: Returns annual salary
    double getAnnualSalary() const;

    // Precondition: None
    // Postcondition: Returns annual production bonus
    double getAnnualProductionBonus() const;

    // Mutators
    // Precondition: salary must be a positive value
    // Postcondition: Annual salary is set to salary
    void setAnnualSalary(double salary);

    // Precondition: bonus must be a non-negative value
    // Postcondition: Annual production bonus is set to bonus
    void setAnnualProductionBonus(double bonus);

    // Print function
    // Precondition: None
    // Postcondition: Shift supervisor information is displayed to console
    void printShiftSupervisor() const;
};

#endif
