#include <iostream>
#include <iomanip>
#include "Employee.h"
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include "TeamLeader.h"
#include "BasicShape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"

using namespace std;

// Function prototypes
void displayMainMenu();
void runFactoryWorkersProject();
void runBasicShapesProject();

int main() {
    int choice;

    do {
        displayMainMenu();
        cout << "Enter your choice: ";
        cin >> choice;
        cout << endl;

        switch (choice) {
        case 1:
            runFactoryWorkersProject();
            break;
        case 2:
            runBasicShapesProject();
            break;
        case 3:
            cout << "Exiting program. Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }

        if (choice != 3) {
            cout << "\nPress Enter to continue...";
            cin.ignore();
            cin.get();
        }

    } while (choice != 3);

    return 0;
}

void displayMainMenu() {
    cout << "\n========================================" << endl;
    cout << "  INHERITANCE & POLYMORPHISM PROJECT" << endl;
    cout << "========================================" << endl;
    cout << "1. Factory Workers (Inheritance)" << endl;
    cout << "2. Basic Shapes (Polymorphism)" << endl;
    cout << "3. Exit" << endl;
    cout << "========================================" << endl;
}

void runFactoryWorkersProject() {
    cout << "\n*** FACTORY WORKERS PROJECT ***" << endl;
    cout << "Demonstrates inheritance without polymorphism" << endl;
    cout << "Class hierarchy: Employee -> ProductionWorker -> TeamLeader" << endl;
    cout << "                 Employee -> ShiftSupervisor" << endl;
    cout << "\n==========================================\n" << endl;

    // Create two ProductionWorker objects
    cout << "Production Worker #1:" << endl;
    cout << "---------------------" << endl;
    ProductionWorker worker1("John Smith", 101, "01/15/2020", 1, 18.50);
    worker1.printProductionWorker();

    cout << "\nProduction Worker #2:" << endl;
    cout << "---------------------" << endl;
    ProductionWorker worker2("Maria Garcia", 102, "03/22/2021", 2, 20.75);
    worker2.printProductionWorker();

    // Create one ShiftSupervisor object
    cout << "\nShift Supervisor:" << endl;
    cout << "-----------------" << endl;
    ShiftSupervisor supervisor("Robert Johnson", 201, "06/10/2015", 75000.00, 5000.00);
    supervisor.printShiftSupervisor();

    // Create one TeamLeader object
    cout << "\nTeam Leader:" << endl;
    cout << "------------" << endl;
    TeamLeader leader("Sarah Williams", 301, "09/05/2018", 1, 22.00, 500.00, 40, 38);
    leader.printTeamLeader();

    cout << "\n==========================================\n" << endl;
    cout << "Factory Workers Project demonstrates:" << endl;
    cout << "- Constructor chaining using initializer lists" << endl;
    cout << "- Code reuse through inheritance" << endl;
    cout << "- Multiple levels of inheritance (TeamLeader)" << endl;
    cout << "- Calling base class methods from derived classes" << endl;
}

void runBasicShapesProject() {
    cout << "\n*** BASIC SHAPES PROJECT ***" << endl;
    cout << "Demonstrates polymorphism with abstract base class" << endl;
    cout << "Class hierarchy: BasicShape -> Circle" << endl;
    cout << "                 BasicShape -> Rectangle -> Square" << endl;
    cout << "\n==========================================\n" << endl;

    // Set precision for floating point output
    cout << fixed << setprecision(2);

    // Create an array of BasicShape pointers (polymorphism)
    const int NUM_SHAPES = 5;
    BasicShape* shapes[NUM_SHAPES];

    // Fill array with different derived class objects
    shapes[0] = new Rectangle(10.0, 5.0, "Large Rectangle");
    shapes[1] = new Rectangle(3.5, 7.2, "Medium Rectangle");
    shapes[2] = new Circle(0.0, 0.0, 4.0, "Small Circle");
    shapes[3] = new Circle(5.0, 10.0, 6.5, "Large Circle");
    shapes[4] = new Square(8.0, "Perfect Square");

    // Loop through array and display name and area using polymorphism
    cout << "Shape Information:" << endl;
    cout << "==================" << endl;
    for (int i = 0; i < NUM_SHAPES; i++) {
        cout << "Shape " << (i + 1) << ": " << shapes[i]->getName() << endl;
        cout << "Area: " << shapes[i]->getArea() << " square units" << endl;
        cout << endl;
    }

    // Clean up dynamically allocated memory
    for (int i = 0; i < NUM_SHAPES; i++) {
        delete shapes[i];
    }

    cout << "==========================================\n" << endl;
    cout << "Basic Shapes Project demonstrates:" << endl;
    cout << "- Abstract base class with pure virtual function" << endl;
    cout << "- Polymorphism through base class pointers" << endl;
    cout << "- Runtime binding (virtual function calls)" << endl;
    cout << "- Array of base class pointers storing derived objects" << endl;
}
