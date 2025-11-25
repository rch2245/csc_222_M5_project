#include "ShiftSupervisor.h"
#include <iostream>

// Default constructor
// Precondition: None
// Postcondition: ShiftSupervisor object created with default values
ShiftSupervisor::ShiftSupervisor() : Employee(), annualSalary(0.0), annualProductionBonus(0.0) {}

// Parameterized constructor using initializer list
// Precondition: Valid employee data, salary, and bonus
// Postcondition: ShiftSupervisor object created with specified values
ShiftSupervisor::ShiftSupervisor(std::string n, int num, std::string date, double salary, double bonus)
    : Employee(n, num, date), annualSalary(salary), annualProductionBonus(bonus) {}

// Accessor implementations
double ShiftSupervisor::getAnnualSalary() const {
    return annualSalary;
}

double ShiftSupervisor::getAnnualProductionBonus() const {
    return annualProductionBonus;
}

// Mutator implementations
void ShiftSupervisor::setAnnualSalary(double salary) {
    annualSalary = salary;
}

void ShiftSupervisor::setAnnualProductionBonus(double bonus) {
    annualProductionBonus = bonus;
}

// Print function implementation
void ShiftSupervisor::printShiftSupervisor() const {
    // Call base class print function
    printEmployee();

    std::cout << "Annual Salary: $" << annualSalary << std::endl;
    std::cout << "Annual Production Bonus: $" << annualProductionBonus << std::endl;
}
