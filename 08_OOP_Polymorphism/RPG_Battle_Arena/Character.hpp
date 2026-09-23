#pragma once
#include <string>

class Character {
    private:
        std::string name;
        int health;
        int attackPower;
    public:
        Character(std::string nName, int nHealth, int nAttackPower);
        std::string getName();
        int getHealth();
        int getAttackPower();
        virtual void display();
        void takeDamage(const int& damage);
        virtual void attack(Character* target);
        void heal(const int& amount);
};