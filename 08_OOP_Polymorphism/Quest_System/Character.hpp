#pragma once
#include <string>

class Character {
    private:
        std::string name;
        int health;
        int gold;
    public:
        Character(std::string nName, int nHealth, int nGold);

        std::string getName();
        int getHealth();
        int getGold();

        virtual void display();

        void takeDamage(const int& damage);
        void heal(const int& amount);
        void earnGold(const int& amount);

        virtual void completeQuest();
};