#include "Mage.hpp"
#include <iostream>

using namespace std;

Mage::Mage(std::string name, int health) : Character(name, health) {}


void Mage::attack() {
    cout << getName() << " casts Fireball!\n"; 
}
void Mage::takeDamage(int amount) {
    health -= amount;
    if (health < 0) health = 0;
    cout << getName() << " takes " << amount <<  " damage! Remaining HP: " << getHealth() << "\n";
}
