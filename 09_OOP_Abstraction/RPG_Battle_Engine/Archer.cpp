#include "Archer.hpp"
#include <iostream>

using namespace std;

Archer::Archer(std::string name, int health) : Character(name, health) {}


void Archer::attack() {
    cout << getName() << " fires an arrow!\n"; 
}
void Archer::takeDamage(int amount) {
    health -= amount;
    if (health < 0) health = 0;
    cout << getName() << " takes " << amount <<  " damage! Remaining HP: " << getHealth() << "\n";
}
