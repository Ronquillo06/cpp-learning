#include "Character.hpp"
#include <iostream>

using namespace std;

Character::Character(std::string nName, int nHealth, int nAttackPower)
        : name(nName), health(nHealth), attackPower(nAttackPower) {}

string Character::getName() {
    return name;
}
int Character::getHealth() {
    return health;
}
int Character::getAttackPower() {
    return attackPower;
}
void Character::display() {
    cout << "Name: " << name << " | " << "Health: " << health << " | " << "Attack Power: " << attackPower << "\n"; 
}
void Character::takeDamage(const int& damage) {
    
    if (damage > 0) {
        health -= damage;
        if (health < 0) {
            health = 0;
    }
}
}
void Character::attack(Character* target) {
    if (target != nullptr && target->getHealth() > 0) {
        cout << name << " attacks " << target->getName() << " for " << attackPower << " damage!\n";
        target->takeDamage(attackPower);
    }
}
void Character::heal(const int& amount) {
    if (amount > 0) {
        health += amount;
        cout << name << " was healed for " << amount << " HP! Current health: " << health << "\n";
    }
}