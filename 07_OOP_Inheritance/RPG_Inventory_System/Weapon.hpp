#include "Item.hpp"
#pragma once

class Weapon : public Item {
    private:
        int damage;
    public:
        Weapon(string name, int value, int ndamage);
        void display();
};