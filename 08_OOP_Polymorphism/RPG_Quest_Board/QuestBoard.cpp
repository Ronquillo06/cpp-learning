#include "QuestBoard.hpp"
#include <iostream>

using namespace std;

void QuestBoard::registerCharacter(Character* character) {
    if (character != nullptr) {
        characters.push_back(character);
    }
}
void QuestBoard::displayCharacters() {
    for (Character* character : characters) {
        character->display();
    }
}

void QuestBoard::rewardCharacter(Character* character, const int& gold) {
    if (character != nullptr) {
        character->earnGold(gold);
    }
}
void QuestBoard::damageCharacter(Character* character, const int& damage) {
    if(character != nullptr) {
        character->takeDamage(damage);
    }
}

void QuestBoard::healEveryone(const int& amount) {
    for (Character* character : characters) {
        character->heal(amount);
    }
}

void QuestBoard::removeCharacter(Character* character) {
    if (character == nullptr) return; 
    
    vector<Character*> updatedCharacters;

    for (Character* nCharacter : characters) {
        if (nCharacter != character) {
            updatedCharacters.push_back(nCharacter);
        }
    }
    characters = updatedCharacters;

    /*for (int i = 0; i < characters.size(); i++) {
        if (characters[i] == character) {
            characters.pop_back();
        }
    }*/
    
}