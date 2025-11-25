#include "Employee.h"
#include <iostream>

// Default constructor
// Precondition: None
// Postcondition: Employee object created with default values
Employee::Employee() : name(""), employeeNumber(0), hireDate("") {}

// Parameterized constructor
// Precondition: Valid name, employee number, and hire date
// Postcondition: Employee object created with specified values
Employee::Employee(std::string n, int num, std::string date)
    : name(n), employeeNumber(num), hireDate(date) {}

// Accessor implementations
std::string Employee::getName() const {
    return name;
}

int Employee::getEmployeeNumber() const {
    return employeeNumber;
}

std::string Employee::getHireDate() const {
    return hireDate;
}

// Mutator implementations
void Employee::setName(std::string n) {
    name = n;
}

void Employee::setEmployeeNumber(int num) {
    employeeNumber = num;
}

void Employee::setHireDate(std::string date) {
    hireDate = date;
}

// Print function implementation
void Employee::printEmployee() const {
    std::cout << "Employee Name: " << name << std::endl;
    std::cout << "Employee Number: " << employeeNumber << std::endl;
    std::cout << "Hire Date: " << hireDate << std::endl;
}
