#pragma once
#include "Vehicle.hpp"

class Motorcycle : public Vehicle {
    private:
        bool hasSidecar;
    public:
        Motorcycle(std::string brand, int year, bool nHasSidecar);
        void display() override;
};
