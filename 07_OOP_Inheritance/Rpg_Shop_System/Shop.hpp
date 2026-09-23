#pragma once
#include <vector>
#include "Character.hpp"

class Shop {
    private:
        std::vector<Character*> characters;
    public:
        void addCharacter(Character* character);
        void displayCharacters();
        void rewardAllCharacter(const int& gold);
        void taxAllCharacter(const int& gold);
};