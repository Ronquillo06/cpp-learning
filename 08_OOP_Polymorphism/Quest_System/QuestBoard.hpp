#pragma once 
#include <vector>
#include "Character.hpp"
#include "Quest.hpp"


class QuestBoard {
    private:
        std::vector<Character*> characters;
        std::vector<Quest*> quests;
    public:
        void registerCharacter(Character* character);
        void addQuest(Quest* quest);

        void displayCharacters();
        void displayQuests();

        void assignQuest(Character* character, Quest* quest);

        void completeQuest(Character* character, Quest* quest);

        void healEveryone(const int& amount);
};