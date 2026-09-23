#include "Vehicle.hpp"
#include "Car.hpp"
#include "Motorcycle.hpp"
#include "Garage.hpp"

int main() {

    Garage garage;

    Car toyota("Toyota", 2020, 4);
    Car honda("Honda", 2022, 2);

    Motorcycle yamaha("Yamaha", 2021, false);
    Motorcycle harleyDavidson("Harley-Davidson", 2019, true);

    garage.addVehicle(&toyota);
    garage.addVehicle(&honda);
    garage.addVehicle(&yamaha);
    garage.addVehicle(&harleyDavidson);

    garage.displayGarage();

    return 0;
};