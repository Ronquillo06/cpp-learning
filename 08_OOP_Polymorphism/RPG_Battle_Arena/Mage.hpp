#pragma once
#include "Character.hpp"


class Mage : public Character {
    private:
        int mana;
    public:
        Mage(std::string name, int health, int attackPower, int nMana);
        void display() override;
        void attack(Character* target) override;
};