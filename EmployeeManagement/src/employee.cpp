#include "../include/employee.h"
#include <iostream>
using namespace std;

Employee::Employee(const string& name, const string& position, double salary)
    : name(name), position(position), salary(salary) {}

string Employee::getName() const {
    return name;
}
string Employee::getPosition() const {
    return position;
}

double Employee::getSalary() const {
    return salary;
}

