#include "Garage.hpp"
#include <iostream>

using namespace std;

void Garage::addVehicle(Vehicle* vehicle) {
    vehicles.push_back(vehicle);
}
void Garage::displayGarage() {
    cout << "===== GARAGE =====\n";
    for (int i = 0; i < vehicles.size(); i++) {
        vehicles[i]->display();
        cout << "----------------\n";
    }
}