#pragma once
#include <string>

class Character {
    private:
        std::string name;
        int gold;
    public:
        Character(std::string nName, int nGold);
        std::string getName();
        int getGold();
        virtual void display();
        void earnGold(const int& amount);
        void spendGold(const int& amount);
};