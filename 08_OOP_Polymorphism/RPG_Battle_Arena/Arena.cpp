#include "Arena.hpp"
#include <iostream>

using namespace std;

void Arena::addCharacter(Character* character) {
    if (character != nullptr) {
        characters.push_back(character);
    }
}
void Arena::displayArena() {
    cout << "=== ARENA ROSTER ===\n";
    for (Character* character : characters) {
        character->display();
    }
}
void Arena::battle(Character* attacker, Character* target) {
    cout << "\n--- BATTLE START ---\n";
    attacker->attack(target);
}
void Arena::healEveryone(const int& amount) {
    cout << "\n=== HEALING ALL CHARACTERS (+ " << amount << " Health) ===\n";
    for (Character* character : characters) {
        character->heal(amount);
    }
}
void Arena::displayAliveCharacters() {
    for(Character* character : characters) {
        if (character->getHealth() > 0) {
            character->display();
        }
    }
}