#include <string>
#pragma once

using namespace std;

class Character {
    private:
        string name;
        int level;
    public:
        Character(string nName, int nLevel);
        string getName();
        int getLevel();
        virtual void display();
};
