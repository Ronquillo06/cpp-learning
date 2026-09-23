#pragma once
#include "Vehicle.hpp"

class Car : public Vehicle {
    private:
        int doors;
    public:
        Car(std::string brand, int year, int nDoors);
        void display() override;
};