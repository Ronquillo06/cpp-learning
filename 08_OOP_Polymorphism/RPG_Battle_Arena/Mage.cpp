#include "Mage.hpp"
#include <iostream>

using namespace std;

Mage::Mage(std::string name, int health, int attackPower, int nMana)
        : Character(name, health, attackPower), mana(nMana) {}

void Mage::display() {
    cout << "[Mage] ";
    Character::display();
    cout << " | Mana: " << mana << "\n";
}
void Mage::attack(Character* target) {
    if (target == nullptr || target->getHealth() <= 0) return;

    int damage = getAttackPower();

    if (mana >= 10) {
        damage += 20;
        mana -= 10;
        cout << getName() << " casts Fireball on " << target->getName() 
              << " dealing " << damage << " magical damage! (Mana left: " << mana << ")\n";
    } else {
            std::cout << getName() << " is out of mana! Uses basic staff attack on " 
              << target->getName() << " dealing " << damage << " damage!\n";
    }
}