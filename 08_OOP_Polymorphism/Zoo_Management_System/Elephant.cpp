#include "Elephant.hpp"
#include <iostream>

using namespace std;

Elephant::Elephant(std::string name, int age, int health, int nTrunkLength) 
    : Animal(name, age, health), trunkLength(nTrunkLength) {}

void Elephant::display() {
    cout << "Name: " << getName() << " | Age: " << getAge() << " | Health: " << getHealth() << " | Trunk Length: " << trunkLength << "\n";
}