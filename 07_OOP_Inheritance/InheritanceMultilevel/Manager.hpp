#include "Employee.hpp"
#include <iostream>
#pragma once

using namespace std;

class Manager : public Employee{
    private:
        string department;

    public:
        void setDepartment(string newDepartment);
        string getDepartment();
        void manage();

};