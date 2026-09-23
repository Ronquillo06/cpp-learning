#pragma once
#include "Character.hpp"

class Mage : public Character {
    private:
        int magicPower;
    public: 
        Mage(std::string name, int health, int gold, int nMagicPower);
        void display() override;
        void completeQuest() override;
};