#pragma once
#include <string>

class Vehicle {
    private:
        std::string brand;
        int year;
    public:
        Vehicle(std::string nBrand, int nYear);
        std::string getBrand();
        int getYear();
        virtual void display();
};