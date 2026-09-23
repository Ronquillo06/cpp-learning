#include "Employee.hpp"

using namespace std;

Employee::Employee(string newName) : Person(newName) {
    cout << "i'm a Employee\n";
}