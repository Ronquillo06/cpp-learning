#pragma once
#include <string>

class Animal {
    private:
        std::string name;
        int age;
        int health;
    public:
        Animal(std::string nName, int nAge, int nHealth);

        std::string getName();
        int getAge();
        int getHealth();

        virtual void display();
        void feed(const int& food);
        void exercise(const int& amount);
};