#include "Shop.hpp"
#include <iostream>

using namespace std;

void Shop::addCharacter(Character* character) {
    characters.push_back(character);
}
void Shop::displayCharacters() {
    for (Character* character : characters) {
        character->display();
        cout << "----------------\n";
    }
}

void Shop::rewardAllCharacter(const int& gold) {
    for (Character* character : characters) {
        character->earnGold(gold);
    }
}
void Shop::taxAllCharacter(const int& gold) {
    for (Character* character : characters) {
        character->spendGold(gold);
    }
}