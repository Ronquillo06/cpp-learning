#include "Mage.hpp"
#include <iostream>
Mage::Mage(string name, int level, int nMana) : Character(name, level), mana(nMana) {}

void Mage::display(){
    cout << "Mage\n";
    cout << getName() << "\n";
    cout << "Level: " << getLevel() << "\n";
    cout << "Mana: " << mana << "\n"; 
}