// ==========================================
// SIMULATING: Smartphone.hpp
// ==========================================

#include <iostream>
#include <string>

using namespace std;

class Smartphone
{

    string brand;
    string model;
    int battery;

    public:
    void setPhone(string new_brand, string new_model, int initialBattery);
    void charge();
    void usePhone();
    void showPhone();

};

// ==========================================
// SIMULATING: Smartphone.cpp
// ==========================================
// #include "Smartphone.hpp"

void Smartphone::setPhone(string new_brand, string new_model, int initialBattery)
{
    brand = new_brand;
    model = new_model;

    if (initialBattery > 100) 
    {
        battery = 100;
    } 
    else if (initialBattery < 0) 
    {
        battery = 0;
    } 
    else 
    {
        battery = initialBattery;
    }
}
void Smartphone::charge()
{
    battery += 15;
    if (battery > 100)
    {
        battery = 100;
        cout << "Battery is fully charged!\n";
    }
}
void Smartphone::usePhone()
{
    battery -= 15;
    if (battery < 0)
    {
        battery = 0;
        cout << "Battery is empty! Please charge your phone.\n";
    }
}
void Smartphone::showPhone()
{
    cout << brand << " " << model << " | Battery: " << battery << "%\n";
}

// ==========================================
// SIMULATING: main.cpp
// ==========================================
//#include "Smartphone.hpp"

int main()
{
    Smartphone myPhone;

    
    myPhone.setPhone("Apple", "iPhone 15", 80);
    myPhone.showPhone();

    
    myPhone.usePhone();
    myPhone.showPhone(); 

    
    myPhone.charge();
    myPhone.showPhone(); 

    // 3. Charge it twice more to see it cap at 100%
    myPhone.charge(); 
    myPhone.charge(); 
    myPhone.showPhone();


    return 0;
}