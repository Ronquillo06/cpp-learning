#include "Weapon.hpp"
#include <iostream>

using namespace std;
Weapon::Weapon(string name, int value, int ndamage) : Item(name, value), damage(ndamage) {} 

void Weapon::display(){
    cout << "Weapon\n";
    cout << getName() << "\n";
    cout << "Damage: " << damage << "\n";
    cout << "Value: " << getValue() << "\n";
}