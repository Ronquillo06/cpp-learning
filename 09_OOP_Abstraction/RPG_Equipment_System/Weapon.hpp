#pragma once
#include "Equipment.hpp"
#include "Usable.hpp"

class Weapon : public Equipment, public Usable {
    private:
        int damage;
    public:
        Weapon(std::string name, int value, int nDamage);
        void displayInfo() override;
        void use() override;
};