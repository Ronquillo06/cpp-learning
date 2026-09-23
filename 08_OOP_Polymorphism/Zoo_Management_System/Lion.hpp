#pragma once
#include "Animal.hpp"

class Lion : public Animal{
    private:
        int strength;
    public:
        Lion(std::string name, int age, int health, int nStrength);
        void display() override;
};