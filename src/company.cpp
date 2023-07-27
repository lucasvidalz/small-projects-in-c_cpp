#include "../include/employee.h"
#include <iostream>
using namespace std;

void Company::addEmployee(const Employee& employee) {
    employees.push_back(employee);
}

void Company::removeEmployee(const string& name) {
    for (auto it = employees.begin(); it != employees.end(); ++it) {
        if (it->getName() == name) {
            employees.erase(it);
            break;
        }
    }
}

void Company::listEmployees() const {
    cout << "List of Employees:\n";
    for (const auto& employee : employees) {
        cout << "Name: " << employee.getName()
                  << ", Position: " << employee.getPosition()
                  << ", Salary: " << employee.getSalary() << endl;
    }
}

