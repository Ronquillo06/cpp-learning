#include "Manager.hpp"
#include <iostream>

using namespace std;

void Manager::setDepartment(string newDepartment){
    department = newDepartment;
}
string Manager::getDepartment(){
    return department;
}
void Manager::manage(){
    cout << getName() << " is managing the " << department << " department.\n";
}