#include "Employee.hpp"
#include <iostream>

using namespace std;

Employee::Employee(){
    cout << "You are now Employed!\n";
}
Employee::~Employee(){
    cout << "You are fired\n";
}