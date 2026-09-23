// ==========================================
// SIMULATING: .hpp
// ==========================================
#include <iostream>
#include <string>

using namespace std;

class Car
{

    public:
    string brand;
    int speed;

    void accelerate();
    void brake();
    void showSpeed();

};


// ==========================================
// SIMULATING: .cpp
// ==========================================
//#include "Car.hpp"

void Car::accelerate()
{
    speed += 10;
}
void Car::brake()
{
    speed -= 10;

    if (speed < 0)
    {
        speed = 0;
    }
}
void Car::showSpeed()
{
    cout << "Brand: " << brand << " | Current Speed: " << speed << " km/h\n";
}
// ==========================================
// SIMULATING: main.cpp
// ==========================================
//#include "Car.hpp"
int main()
{

    Car myCar;

    myCar.brand = "Toyota Land Cruiser";
    myCar.speed = 0;

    cout << "--- Testing Acceleration ---\n";
    myCar.accelerate();
    myCar.accelerate();
    myCar.accelerate();
    myCar.showSpeed();

    cout << "\n--- Testing Brake ---\n";
    myCar.brake();
    myCar.brake();
    myCar.showSpeed();

    cout << "\n--- Testing Below 0 Protection ---\n";
    myCar.brake();
    myCar.brake();
    myCar.showSpeed();



    return 0;
}