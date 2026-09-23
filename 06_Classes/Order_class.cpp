// ==========================================
// SIMULATING: .hpp
// ==========================================

#include <iostream>
#include <string>

using namespace std;

class Order
{
    public:
    double subtotal;
    int itemCount;

    
    void startOrder();
    void addItem(double price);
    double calculateFinalTotal(bool hasPromoCode, double deliveryDistance);
    void itemTotal();
    
};

// ==========================================
// SIMULATING: .cpp
// ==========================================
// #include ".hpp"

void Order::startOrder()
{
    subtotal = 0.0;
    itemCount = 0;
}
void Order::addItem(double price)
{
    itemCount++;
    subtotal += price;
}
double Order::calculateFinalTotal(bool hasPromoCode, double deliveryDistance)
{
    double finalTotal = subtotal;

    if (hasPromoCode) 
    {
        finalTotal -= (subtotal * 0.10);
    }

    if (subtotal <= 50.00)
    {
        finalTotal += (deliveryDistance * 1.50);
    }

    return finalTotal;
}
void Order::itemTotal()
{
    cout << "Cart: " << itemCount << "\n";
    cout << "Checkout Price: " << subtotal << "\n";

}

// ==========================================
// SIMULATING: main.cpp
// ==========================================
//#include ".hpp"

int main()
{

   Order order1;
    order1.startOrder();
    order1.addItem(20.00);
    order1.addItem(15.00); 
    order1.itemTotal(); // 2 items, $35.00
    
    // Total: $35.00 - $3.50 (Promo) + $7.50 (5 miles * $1.50) = $39.00
    cout << "Order 1 Final Total: $" << order1.calculateFinalTotal(true, 5) << "\n\n";

    // Test Case 2: Over $50 (Should get FREE delivery)
    Order order2;
    order2.startOrder();
    order2.addItem(40.00);
    order2.addItem(25.00);
    order2.itemTotal(); // 2 items, $65.00
    
    // Total: $65.00 - $6.50 (Promo) + $0.00 (Free Delivery!) = $58.50
    cout << "Order 2 Final Total: $" << order2.calculateFinalTotal(true, 10) << "\n";

    return 0;
}