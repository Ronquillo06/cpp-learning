#include "Person.hpp"
#include <iostream>
using namespace std;

void Person::setName(string newName){
    name = newName;
}

string Person::getName(){
    return name;
}

void Person::walk(){
    cout << name << " is walking.\n";
}