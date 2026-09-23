#include "Character.hpp"
#include <iostream>

using namespace std;

Character::Character(string nName, int nHealth, int nGold)
        : name(nName), health(nHealth), gold(nGold) {}

string Character::getName() {
    return name;
}
int Character::getHealth() {
    return health;
}
int Character::getGold() {
    return gold;
}

void Character::display() {
    cout << name << " | " << "Health: " << health << " | " << "Gold: " << gold << "\n";
}

void Character::takeDamage(const int& damage) {
    if (damage > 0) {
        health -= damage;
        if (health < 0) {
            health = 0;
        }
    }
}
void Character::heal(const int& amount) {
    if (amount > 0) {
        health += amount;
        if (health > 100) {
            health = 100;
        }
    }
}
void Character::earnGold(const int& amount) {
    if (amount > 0) {
        gold += amount;
    }
}