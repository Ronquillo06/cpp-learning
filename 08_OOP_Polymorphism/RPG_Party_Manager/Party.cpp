#include "Party.hpp"
#include <iostream>

using namespace std;


void Party::recruit(Character* character) {
    if (character != nullptr) {
        characters.push_back(character);
    }
}
void Party::displayParty() {
    for (Character* character : characters) {
        character->display();
    }
}
void Party::healEveryone(const int& amount) {
    for (Character* character : characters) {
        character->heal(amount);
    }
}
void Party::damageCharacter(Character* character, const int& damage) {
    if (character != nullptr) {
        character->takeDamage(damage);
    }
}
void Party::rewardCharacter(Character* character, const int& gold) {
    character->earnGold(gold);
}