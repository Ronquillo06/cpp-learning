#pragma once
#include "Equipment.hpp"
#include "Usable.hpp"

class Potion : public Equipment, public Usable {
    private: 
        int healAmount;
    public:
        Potion(std::string name, int value, int nHealAmount);
        void displayInfo() override;
        void use() override;
};