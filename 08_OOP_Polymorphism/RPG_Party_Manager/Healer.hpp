#pragma once
#include "Character.hpp"

class Healer : public Character {
    private:
        int healingPower;
    public:
        Healer(std::string name, int health, int gold, int nHealingPower);
        void display() override;
};