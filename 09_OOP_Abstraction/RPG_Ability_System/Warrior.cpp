#include "Warrior.hpp"
#include <iostream>

using namespace std;

Warrior::Warrior(std::string name, int health) : Character(name, health) {}

void Warrior::useAbility() {
    cout << getName() << " uses POWER STRIKE!\n";
}