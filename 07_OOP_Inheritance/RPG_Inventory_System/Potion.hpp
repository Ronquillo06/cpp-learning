#include "Item.hpp"
#pragma once
class Potion : public Item {
    private:
        int healAmount;
    public:
        Potion(string name, int value, int nhealAmount);
        void display();
};