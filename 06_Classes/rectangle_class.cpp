// ==========================================
// SIMULATING: .hpp
// ==========================================
#include <iostream>
#include <string>

using namespace std;

class Rectangle
{

    //attributes
    private:
    int width;
    int height;

    public:
    void SetSize(int w, int h);
    int getArea();

};

// ==========================================
// SIMULATING: .cpp
// ==========================================
void Rectangle::SetSize(int w, int h)
{
    width = w;
    height = h;
}

int Rectangle::getArea()
{
    return width * height;
}
// ==========================================
// SIMULATING: .cpp
// ==========================================

int main()
{

    Rectangle box;
    box.SetSize(10,5);

    cout << box.getArea();


    return 0;
}