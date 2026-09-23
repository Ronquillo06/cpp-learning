#pragma once
#include <vector>
#include "Character.hpp"

class QuestBoard {
private:
    std::vector<Character*> characters;

public:
    void registerCharacter(Character* character);
    void displayCharacters();

    void rewardCharacter(Character* character, const int& gold);
    void damageCharacter(Character* character, const int& damage);

    void healEveryone(const int& amount);

    void removeCharacter(Character* character);
};