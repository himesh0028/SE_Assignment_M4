/*6. Write a C++ program to implement a class called Employee
that has private member variables for name, employee ID,
and salary. Includemember functions to calculate and set
salary based on employee performance. Using of
constructor*/
#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string e_name;
    int e_id;
    int salary;
    int performance;

public:
    Employee() {
        cout << "\n\n\t Enter employee name: ";
        getline(cin, e_name);
        cout << "\n\n\t Enter employee ID: ";
        cin >> e_id;
        cout << "\n\n\t Enter employee salary: ";
        cin >> salary;
        cout << "\n\n\t Enter employee performance (/10): ";
        cin >> performance;
    }

    void calculateSalary();
    void printInfo();
};

void Employee::calculateSalary() {
    if (performance == 10) {
        salary += 5000;
    } else if (performance == 9) {
        salary += 4500;
    } else if (performance == 8) {
        salary += 4000;
    } else if (performance == 7) {
        salary += 3500;
    } else if (performance == 6) {
        salary += 3000;
    } else if (performance == 5) {
        salary += 2500;
    } else if (performance == 4) {
        salary += 2000;
    } else if (performance == 3) {
        salary += 1500;
    } else if (performance == 2) {
        salary += 1000;
    } else if (performance == 1) {
        salary += 500;
    } else {
        cout << "\n\t Invalid performance rating. No salary change.";
    }
}

void Employee::printInfo() {
    cout << "\n\t Employee Name: " << e_name;
    cout << "\n\t Employee ID: " << e_id;
    cout << "\n\t Employee Salary: " << salary;
}

int main() {
    Employee e;
    e.calculateSalary();
    e.printInfo();

    return 0;
}

