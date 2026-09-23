#pragma once
#include "Character.hpp"
#include <vector>

class Arena {
    private:
        std::vector<Character*> characters;
    public:
        void addCharacter(Character* character);
        void displayArena();
        void battle(Character* attacker, Character* target);
        void healEveryone(const int& amount);
        void displayAliveCharacters(); 
};