#pragma once
#include "Character.hpp"

class Archer : public Character {
    private:
        int accuracy;
    public:
        Archer(std::string name, int gold, int nAccuracy);
        void display() override;
};