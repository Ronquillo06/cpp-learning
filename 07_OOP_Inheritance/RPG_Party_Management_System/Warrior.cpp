#include "Warrior.hpp"
#include <iostream>

Warrior::Warrior(string name, int level, int nattack) 
    : Character(name, level), attack(nattack) {}
void Warrior::display(){
    cout << "Warrior\n";
    cout << getName() << "\n";
    cout << "Level: " << getLevel() << "\n";
    cout << "Attack: " << attack << "\n";
}