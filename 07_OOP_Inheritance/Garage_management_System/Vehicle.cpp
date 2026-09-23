#include "Vehicle.hpp"
#include <iostream>

using namespace std;

Vehicle::Vehicle(std::string nBrand, int nYear) 
        : brand(nBrand), year(nYear) {}

string Vehicle::getBrand(){
    return brand;
}
int Vehicle::getYear(){
    return year;
}
void Vehicle::display(){
    cout << "Vehicle\n";
    cout << brand << "\n";
    cout << "Year: " << year << "\n";
}