#include "Warrior.hpp"
#include <iostream>

using namespace std;

Warrior::Warrior(std::string name, int health) : Character(name, health) {}


void Warrior::attack() {
    cout << getName() << " swings his sword!\n"; 
}
void Warrior::takeDamage(int amount) {
    health -= amount;
    if (health < 0) health = 0;
    cout << getName() << " takes " << amount <<  " damage! Remaining HP: " << getHealth() << "\n";
}

