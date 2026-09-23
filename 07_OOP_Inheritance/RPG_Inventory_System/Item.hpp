#include <string>
#pragma once

using namespace std;
class Item {
    private:
        string name;
        int value;
    public:
        Item(string nname, int vvalue);
        string getName();
        int getValue();
        virtual void display();
};