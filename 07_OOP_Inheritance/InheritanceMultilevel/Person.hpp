#include <iostream>
#pragma once
#include <string>
using namespace std;

class Person {

    private:
        string name;

    public:
        void setName(string newName);
        string getName();
        void walk();

};