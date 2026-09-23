#include "Character.hpp"
#pragma once

class Mage : public Character {
    private:
        int mana;
    public:
        Mage(string name, int level, int nMana);
        void display();
};