#include <string>
#pragma once

class Animal {
    private:
        std::string name;
        int age;
    public:
        Animal(std::string nName, int nAge);
        std::string getName();
        int getAge();
        virtual void display();
};