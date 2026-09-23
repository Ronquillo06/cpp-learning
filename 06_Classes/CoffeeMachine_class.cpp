// ==========================================
// SIMULATING: CoffeMachine.hpp
// ==========================================
#include <iostream>
#include <string>

using namespace std;

class CoffeeMachine
{

    int waterLevel;
    int beansLevel;

    public:
    void refill();
    void makeCoffee();
    void showSupplies();

};

// ==========================================
// SIMULATING: CoffeMachine.cpp
// ==========================================
// #include "CoffeMachine.hpp"

void CoffeeMachine::refill()
{
    waterLevel = 100, beansLevel = 100;
    cout << "Machine fully refilled!\n";
}
void CoffeeMachine::makeCoffee()
{
    if (waterLevel >= 20 && beansLevel >= 15)
    {
        waterLevel -= 20;
        beansLevel -= 15;
        cout << "Enjoy your coffee!\n";
    }
    else 
    {
        cout << "Error: Insufficient ingredients. Please refill.\n";
    }
}
void CoffeeMachine::showSupplies() 
{
    cout << "Supplies -> Water: " << waterLevel << "% | Beans: " << beansLevel << "%\n";
}
// ==========================================
// SIMULATING: main.cpp
// ==========================================
//#include "CoffeMachine.hpp"

int main()
{
    CoffeeMachine myMachine;

    // 1. Fill up the machine and look at original levels
    myMachine.refill();
    myMachine.showSupplies(); // Expected: 100% | 100%

    // 2. Make some coffee cups to run down supplies
    cout << "\n--- Making 4 Cups of Coffee ---" << "\n";
    myMachine.makeCoffee(); // Uses 20 water, 15 beans (Remains: 80, 85)
    myMachine.makeCoffee(); // Uses 20 water, 15 beans (Remains: 60, 70)
    myMachine.makeCoffee(); // Uses 20 water, 15 beans (Remains: 40, 55)
    myMachine.makeCoffee(); // Uses 20 water, 15 beans (Remains: 20, 40)
    myMachine.showSupplies();

    // 3. Make the 5th cup (Takes water down exactly to 0, beans to 25)
    cout << "\n--- Making 5th Cup ---" << "\n";
    myMachine.makeCoffee();
    myMachine.showSupplies();

    // 4. Try making a 6th cup when water is completely empty
    cout << "\n--- Trying to make another cup ---" << "\n";
    myMachine.makeCoffee(); // Expected: Error message

    return 0;
}