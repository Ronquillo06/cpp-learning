#include "Account.hpp"
#include "SavingAccount.hpp"
#include "CheckingAccount.hpp"
#include "Bank.hpp"
#include <iostream>

int main() {

    Bank bank;

    SavingAccount john("John", 5000, 3);
    SavingAccount roy("roy", 10000, 4);

    CheckingAccount mary("Mary", 4200, 15);
    CheckingAccount joy("Joy", 5200, 20);

    john.deposit(300);
    roy.deposit(900);

    john.withdraw(1300);
    roy.withdraw(2900);

    mary.withdraw(3000);
    joy.withdraw(5000);

    std::cout << "\n=========================\n";

    bank.addAccount(&john); 
    bank.addAccount(&roy); 
    bank.addAccount(&mary); 
    bank.addAccount(&joy); 

    bank.displayAccount();

  return 0;
}