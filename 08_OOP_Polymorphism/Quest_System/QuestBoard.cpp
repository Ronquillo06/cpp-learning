#include "QuestBoard.hpp"
#include <iostream>

using namespace std;


void QuestBoard::registerCharacter(Character* character) {
    if (character != nullptr) {
        characters.push_back(character);
    }
}
void QuestBoard::addQuest(Quest* quest) {
    if (quest != nullptr) {
        quests.push_back(quest);
    }
}

void QuestBoard::displayCharacters() {
    std::cout << "=== REGISTERED CHARACTERS ===\n"; 
    if (characters.empty()) {
        cout << "No characters registered.\n"; 
        return;
    }

    for (Character* character : characters) {
        if (character != nullptr) {
            character->display();
            cout << "-------------------\n";
        }
    }
}
void QuestBoard::displayQuests() {
    std::cout << "=== AVAILABLE QUESTS ===\n";
    if (quests.empty()) {
        cout << "No quests available.\n"; 
        return;
    }

    for (Quest* quest : quests) {
        if (quest != nullptr) {
            quest->display();
            cout << "-------------------\n"; 
        }
    }
}

void QuestBoard::assignQuest(Character* character, Quest* quest) {
    if (character != nullptr && quest != nullptr) {
        cout << character->getName() << " accepted: " << quest->getTitle() << "\n"; 
        
        character->takeDamage(quest->getDamage());

        cout << character->getName() << " took " << quest->getDamage() << " damage!\n";
        cout << "Current Health: " << character->getHealth() << "\n";
        cout << "-------------------\n";
    }
}

void QuestBoard::completeQuest(Character* character, Quest* quest) {
    if (character != nullptr && quest != nullptr) {
        character->earnGold(quest->getReward());

        cout << character->getName() << " completed: " << quest->getTitle() << "!\n";
        cout << "Reward received: " << quest->getReward() << " gold.\n";
        
        
        character->completeQuest();
        
        cout << "Total Gold: " << character->getGold() << "\n";
        cout << "-------------------\n";
    }
    
}

void QuestBoard::healEveryone(const int& amount) {
    std::cout << "=== HEALING ALL CHARACTERS (" << amount << " HP) ===\n";
    
    for (Character* character : characters) {
        if (character != nullptr) {
            character->heal(amount);
            std::cout << character->getName() << " healed! Current Health: " << character->getHealth() << "\n";
        }
    }
    std::cout << "-------------------\n";

}