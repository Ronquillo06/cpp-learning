#include "Archer.hpp"
#include <iostream>

using namespace std;

Archer::Archer(std::string name, int gold, int nAccuracy) 
    : Character(name, gold), accuracy(nAccuracy) {}

void Archer::display() {
    cout << "Archer\n";
    cout << getName() << "\n";
    cout << "Gold: " << getGold() << "\n";
    cout << "Accuracy: " << accuracy << "\n";
}