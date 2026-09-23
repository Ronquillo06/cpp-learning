#pragma once
#include "Character.hpp"

class Knight : public Character {
    private:
        int strength;
    public:
        Knight(std::string name, int gold, int nStrength); 
        void display() override;
};