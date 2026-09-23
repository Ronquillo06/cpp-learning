#include "Car.hpp"
#include <iostream>

using namespace std;

Car::Car(string brand, int year, int nDoors) 
    : Vehicle(brand, year), doors(nDoors) {}

void Car::display() {
    cout << "Car\n";
    cout << getBrand() << "\n";
    cout << "Doors: " << doors << "\n";
    cout << "Year: " << getYear() << "\n";
}