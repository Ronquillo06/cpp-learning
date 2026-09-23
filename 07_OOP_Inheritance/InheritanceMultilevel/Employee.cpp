#include "Employee.hpp"
#include <iostream>

using namespace std;

void Employee::setemployeeId(int newID){
    if (newID >= 10000 && newID <= 99999){
        employeeID = newID;
    } else {
        cout << "Error: Employee ID must be exactly 5 characters long!\n";
        employeeID = 99999;
    }
}
int Employee::getemployeeID(){
    return employeeID;
}
void Employee::work(){
    cout << getName() << " (ID: " << employeeID << " )" << " is working.\n";
}