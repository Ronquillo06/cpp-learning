#include <iostream>

int main() {

       // cinema ticket checker

       int age;
       int hasTicket;

       std::cout << "Enter age: ";
       std::cin >> age;

       std::cout << "Choose Ticket (1 or 0): ";
       std::cin >> hasTicket;

       if (age >= 13 && hasTicket == 1) {

        std::cout << "You May Enter\n";
       
    } else {
        
        std::cout << "Entry Denied\n";

    }


    return 0;
}