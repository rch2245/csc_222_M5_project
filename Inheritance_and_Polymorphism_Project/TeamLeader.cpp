#include "TeamLeader.h"
#include <iostream>

// Default constructor
// Precondition: None
// Postcondition: TeamLeader object created with default values
TeamLeader::TeamLeader()
    : ProductionWorker(), monthlyBonus(0.0), requiredTrainingHours(0), attendedTrainingHours(0) {}

// Parameterized constructor using initializer list
// Precondition: Valid data for all attributes
// Postcondition: TeamLeader object created with specified values
TeamLeader::TeamLeader(std::string n, int num, std::string date, int sh, double pay,
                       double bonus, int reqHours, int attHours)
    : ProductionWorker(n, num, date, sh, pay),
      monthlyBonus(bonus),
      requiredTrainingHours(reqHours),
      attendedTrainingHours(attHours) {}

// Accessor implementations
double TeamLeader::getMonthlyBonus() const {
    return monthlyBonus;
}

int TeamLeader::getRequiredTrainingHours() const {
    return requiredTrainingHours;
}

int TeamLeader::getAttendedTrainingHours() const {
    return attendedTrainingHours;
}

// Mutator implementations
void TeamLeader::setMonthlyBonus(double bonus) {
    monthlyBonus = bonus;
}

void TeamLeader::setRequiredTrainingHours(int hours) {
    requiredTrainingHours = hours;
}

void TeamLeader::setAttendedTrainingHours(int hours) {
    attendedTrainingHours = hours;
}

// Print function implementation
void TeamLeader::printTeamLeader() const {
    // Call base class (ProductionWorker) print function
    // which in turn calls Employee's print function
    printProductionWorker();

    std::cout << "Monthly Bonus: $" << monthlyBonus << std::endl;
    std::cout << "Required Training Hours: " << requiredTrainingHours << std::endl;
    std::cout << "Attended Training Hours: " << attendedTrainingHours << std::endl;
}
