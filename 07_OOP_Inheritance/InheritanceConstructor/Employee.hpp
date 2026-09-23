#include <iostream>
#include "Person.hpp"
#pragma once
using namespace std;

class Employee : public Person{
    public:
        using Person::Person;
        Employee(string newName);
};