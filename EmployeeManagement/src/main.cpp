#include "../include/employee.h"
#include <iostream>

int main() {
    Company company;

    // Adding employees
    company.addEmployee(Employee("Lucas", "Analyst", 3500.0));
    company.addEmployee(Employee("Maria", "Manager", 5500.0));
    company.addEmployee(Employee("David", "Programmer", 3000.0));

    //showing list
    company.listEmployees();

    // Removing an employee
    company.removeEmployee("Lucas");

    std::cout<<"----------------------------------------"<<std::endl;
    std::cout<< "After removing Lucas: "<<std::endl;
    std::cout<<"----------------------------------------"<<std::endl;

    company.listEmployees();

    return 0;
}

