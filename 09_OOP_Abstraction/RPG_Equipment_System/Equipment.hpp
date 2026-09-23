#pragma once
#include <string>

class Equipment {   
    private:
        std::string name;
        int value;
    public:
        Equipment(std::string nName, int nValue);
        std::string getName();
        int getValue();
        virtual void displayInfo() = 0;  
};