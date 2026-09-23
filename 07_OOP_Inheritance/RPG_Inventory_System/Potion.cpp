#include "Potion.hpp"
#include <iostream>

using namespace std;

Potion::Potion(string name, int value, int nhealAmount) 
    : Item(name, value), healAmount(nhealAmount) {}


void Potion::display(){
    cout << "Potion\n";
    cout << getName() << "\n";
    cout << "Heal: " << healAmount << "\n";
    cout << "Value: " << getValue() << "\n";
}