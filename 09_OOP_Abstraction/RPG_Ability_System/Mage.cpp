#include <iostream>
#include "Mage.hpp"

using namespace std;

Mage::Mage(string name, int health) : Character(name, health) {}

void Mage::useAbility() {
    cout << getName() << " casts FIREBALL!\n";
}