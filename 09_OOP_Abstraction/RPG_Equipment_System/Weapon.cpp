#include "Weapon.hpp"
#include <iostream>

using namespace std;


Weapon::Weapon(std::string name, int value, int nDamage)
    : Equipment(name, value), damage(nDamage) {}

void Weapon::displayInfo() {
    cout << getName() << "\n";;
    cout << "Value: " << getValue() << " gold\n";
    cout << "Damage: " << damage << "\n";
}
void Weapon::use() {
    cout << "\n";
    cout << "You swing the " << getName() << "!\n";
}