#pragma once
#include "Character.hpp"

class Warrior : public Character {
    private:
        int strength;
    public:
        Warrior(std::string name, int health, int gold, int nStrength);
        void display() override;
};