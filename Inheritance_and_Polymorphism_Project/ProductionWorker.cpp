#include "ProductionWorker.h"
#include <iostream>

// Default constructor
// Precondition: None
// Postcondition: ProductionWorker object created with default values
ProductionWorker::ProductionWorker() : Employee(), shift(1), hourlyPayRate(0.0) {}

// Parameterized constructor using initializer list
// Precondition: Valid employee data, shift (1 or 2), and pay rate
// Postcondition: ProductionWorker object created with specified values
ProductionWorker::ProductionWorker(std::string n, int num, std::string date, int sh, double pay)
    : Employee(n, num, date), shift(sh), hourlyPayRate(pay) {}

// Accessor implementations
int ProductionWorker::getShift() const {
    return shift;
}

double ProductionWorker::getHourlyPayRate() const {
    return hourlyPayRate;
}

// Mutator implementations
void ProductionWorker::setShift(int sh) {
    shift = sh;
}

void ProductionWorker::setHourlyPayRate(double pay) {
    hourlyPayRate = pay;
}

// Print function implementation
void ProductionWorker::printProductionWorker() const {
    // Call base class print function
    printEmployee();

    std::cout << "Shift: " << (shift == 1 ? "Day" : "Night") << std::endl;
    std::cout << "Hourly Pay Rate: $" << hourlyPayRate << std::endl;
}
