#pragma once
#include "Character.hpp"

class Archer : public Character {
    public:
        Archer(std::string name, int health);
        void attack() override;
        void takeDamage(int amount) override;
};