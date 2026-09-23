#pragma once
#include "Player.hpp"

class Healer : public Player {
    private:
        int healingPower;
    public:
        Healer(std::string name, int coins, int nHealingPower);
        void display() override;
};