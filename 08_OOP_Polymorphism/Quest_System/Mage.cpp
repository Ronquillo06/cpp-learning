#include "Mage.hpp"
#include <iostream>

using namespace std;

Mage::Mage(std::string name, int health, int gold, int nMagicPower) 
    : Character(name, health, gold), magicPower(nMagicPower) {}

void Mage::display() {
    cout << "[Mage]\n";
    Character::display();
    cout << "Magic Power: " << magicPower << "\n";
}
void Mage::completeQuest() {
    cout << "Mage " << getName() << " completed the quest using magic!\n";
}