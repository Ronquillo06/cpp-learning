// ==========================================
// SIMULATING: Ticket.hpp
// ==========================================
#include <iostream>
#include <string>

using namespace std;

class Ticket
{
    public:
    string movieTitle;
    double basePrice;

    void setTicket(string title, double price);
    double calculatePrice(int age, bool isWeekend);

};

// ==========================================
// SIMULATING: .cpp
// ==========================================
//#include "Ticket.hpp";

void Ticket::setTicket(string title, double price)
{
    movieTitle = title;
    basePrice = price;
}

double Ticket::calculatePrice(int age, bool isWeekend)
{
    double finalPrice = basePrice;

    if (age < 12 || age > 60)
    {
        finalPrice -= (basePrice * 0.20);
    }

    if (isWeekend)
    {
        finalPrice += 3.00;
    }

    return finalPrice;
}

// ==========================================
// SIMULATING: main.cpp
// ==========================================
//#include "Ticket.hpp";

int main()
{

    Ticket movie;
    movie.setTicket("Avengers: Endgame", 15.00);

    cout << "Movie: " << movie.movieTitle << " (Base Price: $" << movie.basePrice << ")\n\n";

    // Test Case 1: Standard weekday adult (No discount, no surcharge)
    cout << "Adult, Weekday: $" << movie.calculatePrice(25, false) << "\n"; // Expected: 15.00

    // Test Case 2: Child on a weekday (20% off of 15.00 = 12.00)
    cout << "Child, Weekday: $" << movie.calculatePrice(10, false) << "\n"; // Expected: 12.00

    // Test Case 3: Adult on a weekend (15.00 + 3.00 surcharge = 18.00)
    cout << "Adult, Weekend: $" << movie.calculatePrice(30, true) << "\n";  // Expected: 18.00

    // Test Case 4: Senior on a weekend (15.00 - 3.00 discount + 3.00 surcharge = 15.00)
    cout << "Senior, Weekend: $" << movie.calculatePrice(65, true) << "\n"; // Expected: 15.00


    return 0;
}
