#include "Potion.hpp"
#include <iostream>

using namespace std;

Potion::Potion(string name, int value, int nHealAmount) 
    : Equipment(name, value), healAmount(nHealAmount) {}

void Potion::displayInfo() {
    cout << getName() << "\n";
    cout << "Value: " << getValue() << " gold\n";
    cout << "Heal Amount: " << healAmount << "\n";
}
void Potion::use() {
    cout << "You drink the " << getName() << " and restore " << healAmount << " HP!\n";
}   