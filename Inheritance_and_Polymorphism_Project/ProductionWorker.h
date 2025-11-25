#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H

#include "Employee.h"

class ProductionWorker : public Employee {
private:
    int shift;              // 1 = day shift, 2 = night shift
    double hourlyPayRate;

public:
    // Constructors
    ProductionWorker();
    ProductionWorker(std::string n, int num, std::string date, int sh, double pay);

    // Accessors
    // Precondition: None
    // Postcondition: Returns shift number (1 or 2)
    int getShift() const;

    // Precondition: None
    // Postcondition: Returns hourly pay rate
    double getHourlyPayRate() const;

    // Mutators
    // Precondition: sh must be 1 (day) or 2 (night)
    // Postcondition: Shift is set to sh
    void setShift(int sh);

    // Precondition: pay must be a positive value
    // Postcondition: Hourly pay rate is set to pay
    void setHourlyPayRate(double pay);

    // Print function
    // Precondition: None
    // Postcondition: Production worker information is displayed to console
    void printProductionWorker() const;
};

#endif
