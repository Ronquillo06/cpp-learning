#include "Knight.hpp"
#include <iostream>

using namespace std;

Knight::Knight(string name, int health, int attackPower, int nArmor) 
        : Character(name, health, attackPower), armor(nArmor) {}

void Knight::display() {
    cout << "[Knight] ";
    Character::display();
    cout << " | Armor: " << armor << "\n";
}
void Knight::attack(Character* target) {
    if (target == nullptr || target->getHealth() <= 0) return;

    int damage = getAttackPower();
    cout << getName() << " performs a Knight Slash on " 
              << target->getName() << " dealing " << damage << " damage!\n";
    target->takeDamage(damage);
}