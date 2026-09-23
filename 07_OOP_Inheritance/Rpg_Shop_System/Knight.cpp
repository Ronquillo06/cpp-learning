#include "Knight.hpp"
#include <iostream>

using namespace std;

Knight::Knight(std::string name, int gold, int nStrength) 
        : Character(name, gold), strength(nStrength) {}


void Knight::display() {
    cout << "Knight\n";
    cout << getName() << "\n";
    cout << "Gold: " << getGold() << "\n";
    cout << "Strength: " << strength << "\n";
}