#pragma once
#include <vector>
#include "Vehicle.hpp"

class Garage {
    private:
        std::vector<Vehicle*> vehicles;
    public:
        void addVehicle(Vehicle* vehicle);
        void displayGarage();
};