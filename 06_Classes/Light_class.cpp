// ==========================================
// SIMULATING: Light.hpp
// ==========================================
#include <iostream>
#include <string>

using namespace std;

class Light
{
    public:
    string room;
    int brightness;
    bool isOn;

    void setLight(string roomName);
    bool togglePower();
    void dim();
    void brighten();
    void showStatus();
};
// ==========================================
// SIMULATING: Light.cpp
// ==========================================
//#include "Light.hpp"

void Light::setLight(string roomName)
{
    room = roomName;
    brightness = 50; //Default
    isOn = false;
}
bool Light::togglePower()
{
    isOn = !isOn;
}
void Light::dim()
{
    brightness -= 10;
    if (brightness < 0)
    {
        brightness = 0;
    }
}
void Light::brighten()
{
    brightness += 10;

    if (brightness > 100)
    {
        brightness = 100;
    }
}
void Light::showStatus()
{
    cout << "Room NAme: " << room << "\n";
    if (isOn == true)
    {
        cout << "ON\n";
    }
    else
    {
        cout << "OFF\n";
    }

    cout << "Light Brightness: " << brightness << "%\n";
}
// ==========================================
// SIMULATING: main.cpp
// ==========================================
//#include "Light.hpp"

int main()
{

    Light light;

    //Checking lights
    light.setLight("Libra");
    light.togglePower();
    light.showStatus();

    //Brightness up
    light.brighten();
    light.brighten();
    light.brighten();
    light.brighten();
    light.brighten();
    light.showStatus();

    //Decrease brightness
    light.dim();
    light.showStatus();

    //increse brightness to > 100
    light.brighten();
    light.brighten();
    light.brighten();
    light.showStatus();

    return 0;
}