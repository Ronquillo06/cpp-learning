#pragma once
#include "Character.hpp"

class Warrior : public Character {
    public:
        Warrior(std::string name, int health);
        void useAbility() override;
};