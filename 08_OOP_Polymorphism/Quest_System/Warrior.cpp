#include "Warrior.hpp"
#include <iostream>

using namespace std;

Warrior::Warrior(std::string name, int health, int gold, int nStrength)
            : Character(name, health, gold), strength(nStrength) {}

void Warrior::display() {
    cout << "[Warrior]\n";
    Character::display();
    cout << "Strength: " << strength << "\n";
} 
void Warrior::completeQuest() {
    cout << "Warrior " << getName() << " completed the quest through strength!\n";
}