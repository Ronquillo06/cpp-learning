#pragma once
#include <string>

class Quest {
    private:
        std::string title;
        int reward;
        int damage;
    public:
        Quest(std::string nTitle, int nReward, int nDamage);
        std::string getTitle();
        int getReward();
        int getDamage();
        void display();
};