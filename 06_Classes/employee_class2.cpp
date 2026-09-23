// ==========================================
// SIMULATING: Employee.hpp
// ==========================================
#include <iostream>
#include <string>

using namespace std;

class Employee
{

    public:
    string name;
    double salary;

    void setEmployee(string newName, double newSalary);
    void increaseSalary(double amount);
    double getSalary();
    void showEmployee();

};



// ==========================================
// SIMULATING: .cpp
// ==========================================
//#include "Employee.hpp"

void Employee::setEmployee(string newName, double newSalary)
{
    name = newName;
    salary = newSalary;
}
void Employee::increaseSalary(double amount)
{
 salary += amount;
}
double Employee::getSalary()
{
    return salary;
}
void Employee::showEmployee()
{
    cout << "Employee Name: " << name << "\n";
    cout << "Employee Salary: $" << salary << "\n";
}

// ==========================================
// SIMULATING: main.cpp
// ==========================================
//#include "Employee.hpp"
//#include <iostream>

int main()
{

    Employee employee;

    //1. Set the employee details
    employee.setEmployee("John", 100000);
    employee.showEmployee();

    //2.Increase their salary
    cout << "\n--- Giving a Raise ---" << "\n";
    employee.increaseSalary(5500);

    //3. Get and print the salary directly from main
    cout << "Salary retrieved via getSalary(): $";
    cout << employee.getSalary() << "\n";


    return 0;
}
