#pragma once
#include "Animal.hpp"

class Elephant : public Animal{
    private:
        int trunkLength;
    public:
        Elephant(std::string name, int age, int health, int nTrunkLength);
        void display() override;
};