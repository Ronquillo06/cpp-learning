#include "Animal.hpp"
#include <iostream>


using namespace std;

Animal::Animal(std::string nName, int nAge) 
    : name(nName), age(nAge) {}

string Animal::getName(){
    return name;
}
int Animal::getAge(){
    return age;
}
void Animal::display(){
    cout << "Animal\n\n";
    cout << name << "\n\n";
    cout << "Age: " << age << "\n\n";
}