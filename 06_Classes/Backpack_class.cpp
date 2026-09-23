// ==========================================
// SIMULATING: .hpp
// ==========================================
#include <iostream>
#include <string>

using namespace std;

class Backpack
{
    public:
    double maxWeight;
    double currentWeight;

    void setBackpack(double maxCap);
    void addItem(double itemWeight);

    void emptyBackpack();
    void showWeight();

};

// ==========================================
// SIMULATING: .cpp
// ==========================================

void Backpack::setBackpack(double maxCap)
{
    maxWeight = maxCap;
    currentWeight = 0.0;
}
void Backpack::addItem(double itemWeight)
{
    if (currentWeight + itemWeight > maxWeight)
    {
        cout << "Too heavy! Item rejected.\n";
    }
    else 
    {
        currentWeight += itemWeight;
        cout << "Item added successfully.\n";
    }
}
void Backpack::emptyBackpack()
{
    currentWeight = 0.0;
}
void Backpack::showWeight()
{
    cout << currentWeight << "kg" << " / " << maxWeight << "kg" << "\n";
}

// ==========================================
// SIMULATING: main.cpp
// ==========================================

int main()
{

    Backpack backpack;
    backpack.setBackpack(10.0);
    backpack.addItem(5.5);
    backpack.addItem(2.0);
    backpack.showWeight();

    return 0;
}