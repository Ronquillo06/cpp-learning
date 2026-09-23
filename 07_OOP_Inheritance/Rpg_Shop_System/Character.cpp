#include "Character.hpp"
#include <iostream> 

using namespace std;


Character::Character(std::string nName, int nGold) 
    : name(nName), gold(nGold) {}

string Character::getName() {
    return name;
}
int Character::getGold() {
    return gold;
}
void Character::display() {
    cout << name << "\n";
    cout << "Gold: " << gold << "\n";
}

void Character::earnGold(const int& amount) {
    if (amount > 0) {
        gold += amount;
        cout << "== Gold earned! ==\n";
        cout << getName() << "\n";
        cout << "Current Gold: " << gold << "\n\n";
    } else {
        cout << getName() << "\n";
        cout << "Invalid Amount!\n\n";
    }
}
void Character::spendGold(const int& amount) {
    if (amount > 0 && amount <= gold) {
        gold -= amount;
        cout << "== Gold Spend! ==\n";
        cout << getName() << "\n";
        cout << "-" << amount << "\n";
        cout << "Current Gold: " << gold << "\n\n";
    } else {
        cout << getName() << "\n";
        cout << "Not Enough Gold!\n";
        cout << "Current Gold: " << gold << "\n\n";
    }
}