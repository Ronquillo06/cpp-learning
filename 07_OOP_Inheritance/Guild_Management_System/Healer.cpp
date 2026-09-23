#include "Healer.hpp"
#include <iostream>

using namespace std;

Healer::Healer(std::string name, int coins, int nHealingPower) 
        : Player(name, coins), healingPower(nHealingPower) {}


void Healer::display() {
    cout << "Healer\n";
    cout << "Name: " << getName() << "\n";
    cout << "Coins: " << getCoins() << "\n";
}
