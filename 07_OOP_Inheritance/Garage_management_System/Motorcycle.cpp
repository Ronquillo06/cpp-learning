#include "Motorcycle.hpp"
#include <iostream>

using namespace std;

Motorcycle::Motorcycle(string brand, int year, bool nHasSidecar) : Vehicle(brand, year), hasSidecar(nHasSidecar) {}

void Motorcycle::display() {
    if (hasSidecar == true) {
        cout << "Motorcycle\n";
        cout << getBrand() << "\n";
        cout << "Sidecar: " << "Yes\n";
        cout << "Year: " << getYear() << "\n";
    } else {
        cout << "Motorcycle\n";
        cout << getBrand() << "\n";
        cout << "Sidecar: " << "No\n"; 
        cout << "Year: " << getYear() << "\n";
    }
}