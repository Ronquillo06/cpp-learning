// ==========================================
// SIMULATING: .hpp
// ==========================================
#include <iostream>
#include <string>

using namespace std;

class Thermometer
{
    public:
    double celsius;

    void setTemperature(double temp);
    double getFahrenheit();
    double getKelvin();
};


// ==========================================
// SIMULATING: .cpp
// ==========================================
void Thermometer::setTemperature(double temp)
{
    celsius = temp;
}
double Thermometer::getFahrenheit()
{
    return (celsius * 1.8) + 32; 
}
double Thermometer::getKelvin()
{
    return celsius + 273.15;
}
// ==========================================
// SIMULATING: main.cpp
// ==========================================

int main()
{

    Thermometer thermometer;
    thermometer.setTemperature(45);
    cout << "Fahrenheit: " << thermometer.getFahrenheit() << "\n";
    cout << "Kelvin: " << thermometer.getKelvin() << "\n"; 

    return 0;
}