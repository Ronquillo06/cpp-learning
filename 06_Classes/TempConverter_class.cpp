// ==========================================
// SIMULATING: .hpp
// ==========================================
#include <iostream>
#include <string>

using namespace std;

class TempConverter
{

    //Attributes
    public:
    double celsius;

    void setCelsius(double temp);
    double getFahrenheit();
    double getKelvin();


};
// ==========================================
// SIMULATING: .cpp
// ==========================================

void TempConverter::setCelsius(double temp)
{
   celsius = temp;
}
double TempConverter::getFahrenheit()
{
    return celsius * 1.8 + 32;
}

double TempConverter::getKelvin()
{
    return celsius + 273.15;
}

// ==========================================
// SIMULATING: main.cpp
// ==========================================

int main()
{

    TempConverter converter;
    converter.setCelsius(25.0);
    cout << "Fahrenheit: " << converter.getFahrenheit() << "\n";
    cout << "Kelvin: " << converter.getKelvin() << "\n";


    return 0;
}