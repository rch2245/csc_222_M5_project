#ifndef TEAMLEADER_H
#define TEAMLEADER_H

#include "ProductionWorker.h"

class TeamLeader : public ProductionWorker {
private:
    double monthlyBonus;
    int requiredTrainingHours;
    int attendedTrainingHours;

public:
    // Constructors
    TeamLeader();
    TeamLeader(std::string n, int num, std::string date, int sh, double pay,
               double bonus, int reqHours, int attHours);

    // Accessors
    // Precondition: None
    // Postcondition: Returns monthly bonus amount
    double getMonthlyBonus() const;

    // Precondition: None
    // Postcondition: Returns required training hours
    int getRequiredTrainingHours() const;

    // Precondition: None
    // Postcondition: Returns attended training hours
    int getAttendedTrainingHours() const;

    // Mutators
    // Precondition: bonus must be a non-negative value
    // Postcondition: Monthly bonus is set to bonus
    void setMonthlyBonus(double bonus);

    // Precondition: hours must be a non-negative value
    // Postcondition: Required training hours is set to hours
    void setRequiredTrainingHours(int hours);

    // Precondition: hours must be a non-negative value
    // Postcondition: Attended training hours is set to hours
    void setAttendedTrainingHours(int hours);

    // Print function
    // Precondition: None
    // Postcondition: Team leader information is displayed to console
    void printTeamLeader() const;
};

#endif
