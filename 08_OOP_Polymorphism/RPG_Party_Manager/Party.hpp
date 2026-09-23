#pragma once
#include "Character.hpp"
#include <vector>

class Party {
    private:
        std::vector<Character*> characters;
    public:
        void recruit(Character* character);
        void displayParty();
        void healEveryone(const int& amount);
        void damageCharacter(Character* character, const int& damage);
        void rewardCharacter(Character* character, const int& gold);
};