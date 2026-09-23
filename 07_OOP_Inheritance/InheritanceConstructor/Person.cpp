#include "Person.hpp"
#include <iostream>

Person::Person(string newName){
    name = newName;
    cout << "Hello! My Name is " << name << "\n";
}

/*void Person::setName(string newName){
    name = newName;
}
string Person::getName(){
    return name;
}*/