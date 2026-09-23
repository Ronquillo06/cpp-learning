#include "Person.hpp"
#include <iostream>
#pragma once
class Employee : public Person{

    private:
        int employeeID;

    public:
        void setemployeeId(int newID);
        int getemployeeID();
        void work();

};
