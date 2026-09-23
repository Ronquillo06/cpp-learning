#include "Manager.hpp"
#include <iostream>

using namespace std;

int main()
{

    Manager manager;

    manager.setName("Max");
    manager.setemployeeId(12345);
    manager.setDepartment("Senior");

    manager.walk();
    manager.work();
    manager.manage();

    Employee employee;

    return 0;
}