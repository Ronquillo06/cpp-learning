#include "Healer.hpp"
#include <iostream>

using namespace std;

Healer::Healer(string name, int health, int gold, int nHealingPower)
        : Character(name, health, gold), healingPower(nHealingPower) {}

void Healer::display() {
    cout << "[Healer]\n";
    Character::display(); 
    cout << "Healing Power: " << healingPower << "\n";
}