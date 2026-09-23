#include <Swordsman.hpp>
#include <iostream>

using namespace std;


Swordsman::Swordsman(std::string name, int coins, int nAttackPower) 
        : Player(name, coins), attackPower(nAttackPower) {}


void Swordsman::display() {
    cout << "Swordsman\n";
    cout << "Name: " << getName() << "\n";
    cout << "Coins: " << getCoins() << "\n";
}

