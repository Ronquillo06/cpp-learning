// ==========================================
// SIMULATING: .hpp
// ==========================================
#include <iostream>
#include <string>

using namespace std;

class CircleArea
{
    public:
    double radius;

    void setRadius(double r);
    double getArea();

};

// ==========================================
// SIMULATING: .cpp
// ==========================================

void CircleArea::setRadius(double r)
{
    radius = r;
}

double CircleArea::getArea()
{
    return 3.14159 * radius * radius;
}

// ==========================================
// SIMULATING: main.cpp
// ==========================================

int main()
{

    CircleArea myCircle;
    myCircle.setRadius(3.5);
    cout << myCircle.getArea() << "\n";

    return 0; 
}