#include "Character.hpp"
#include <iostream>

using namespace std;


Character::Character(string nName, int nHealth) 
    : name(nName), health(nHealth) {}


void Character::displayInfo() {
    cout << "Name: " << name << " | Health: " << health << "\n";
}
string Character::getName() {
    return name;
}