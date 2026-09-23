// ==========================================
// SIMULATING: Product.hpp
// ==========================================
#include <iostream>
#include <string>

using namespace std;

class Product
{
    //atributes
    private:
    string name;
    double price;

    //method
    public:
    void setProduct(string newName, double newPrice);
    void display();


};


// ==========================================
// SIMULATING: Product.cpp
// ==========================================

void Product::setProduct(string newName, double newPrice)
{
    name = newName;
    price = newPrice;
}

void Product::display()
{

    cout << "\n";
    cout << "Name: " << name << "\n";
    cout << "Price: " << price << "\n";
}

// ==========================================
// SIMULATING: main.cpp
// ==========================================


int main()
{

    Product product1;
    product1.setProduct("Pizza", 450);
    product1.display();

    Product product2;
    product2.setProduct("Fish", 200);
    product2.display();

    return 0;
}