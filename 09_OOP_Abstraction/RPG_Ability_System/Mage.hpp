#pragma once
#include "Character.hpp"

class Mage : public Character {
    public:
        Mage(std::string name, int health);
        void useAbility() override;
};