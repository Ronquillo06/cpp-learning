#pragma once
#include "Character.hpp"

class Knight : public Character {
    private:
        int armor;
    public:
        Knight(std::string name, int health, int attackPower, int nArmor);
        void display() override;
        void attack(Character* target) override;
};
