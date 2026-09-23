#include "Character.hpp"
#pragma once
class Warrior : public Character{
    private:
        int attack;
    public:
        Warrior(string name, int level, int nattack);
        void display();
};  