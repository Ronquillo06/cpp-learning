#pragma once
#include "Character.hpp"

class Warrior : public Character {
    public:
        Warrior(std::string name, int health);
        void attack() override;
        void takeDamage(int amount) override;
};

