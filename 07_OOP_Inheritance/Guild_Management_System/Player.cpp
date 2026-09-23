#include "Player.hpp"
#include <iostream>

using namespace std;

Player::Player(string nName, int nCoins) 
    : name(nName), coins(nCoins) {}

string Player::getName() {
    return name;
}
int Player::getCoins() {
    return coins;
}
void Player::display() {
    cout << name << "\n";
    cout << "Coins: " << coins << "\n";
}
void Player::earnCoins(const int& amount) {
    if (amount > 0) {
        coins += amount;
    }
}
void Player::spendCoins(const int& amount) {
    if (amount > 0 && amount <= coins) {
        coins -= amount;
    }   else {
        cout << "Not enough coins!\n";
    }
}