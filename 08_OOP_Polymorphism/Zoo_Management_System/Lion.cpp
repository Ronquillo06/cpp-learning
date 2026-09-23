#include "Lion.hpp"
#include <iostream>

using namespace std;

Lion::Lion(std::string name, int age, int health, int nStrength) 
    : Animal(name, age, health), strength(nStrength) {}

void Lion::display() {
    cout << "Name: " << getName() << " | Age: " << getAge() << " | Health: " << getHealth() << " | Strength: " << strength << "\n";
}