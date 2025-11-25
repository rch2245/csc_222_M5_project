#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
private:
    std::string name;
    int employeeNumber;
    std::string hireDate;

public:
    // Constructors
    Employee();
    Employee(std::string n, int num, std::string date);

    // Accessors
    // Precondition: None
    // Postcondition: Returns employee name
    std::string getName() const;

    // Precondition: None
    // Postcondition: Returns employee number
    int getEmployeeNumber() const;

    // Precondition: None
    // Postcondition: Returns hire date
    std::string getHireDate() const;

    // Mutators
    // Precondition: n is a valid name string
    // Postcondition: Employee name is set to n
    void setName(std::string n);

    // Precondition: num is a positive integer
    // Postcondition: Employee number is set to num
    void setEmployeeNumber(int num);

    // Precondition: date is a valid date string
    // Postcondition: Hire date is set to date
    void setHireDate(std::string date);

    // Print function
    // Precondition: None
    // Postcondition: Employee information is displayed to console
    void printEmployee() const;
};

#endif
