// employee.h
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>
#include <vector>
using namespace std;
class Employee {
private:
    string name;
    string position;
    double salary;

public:
    Employee(const string& name, const string& position, double salary);

    string getName() const;
    string getPosition() const;
    double getSalary() const;
};

class Company {
private:
    vector<Employee> employees;

public:
    void addEmployee(const Employee& employee);
    void removeEmployee(const string& name);
    void listEmployees() const;
};

#endif // EMPLOYEE_H

