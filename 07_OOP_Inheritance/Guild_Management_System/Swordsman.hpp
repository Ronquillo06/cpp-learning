#pragma once
#include "Player.hpp"


class Swordsman : public Player {
    private:
        int attackPower;
    public:
        Swordsman(std::string name, int coins, int nAttackPower);
        void display() override;
};