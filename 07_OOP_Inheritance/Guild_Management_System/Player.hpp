#pragma once
#include <string>

class Player {
    private:
        std::string name;
        int coins;
    public:
        Player(std::string nName, int nCoins);
        std::string getName();
        int getCoins();
        virtual void display();
        void earnCoins(const int& amount);
        void spendCoins(const int& amount);
};