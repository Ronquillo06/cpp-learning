#include "SavingAccount.hpp"
#include <iostream>

using namespace std;

SavingAccount::SavingAccount(std::string ownerName, double balance, double nInterestRate) : Account(ownerName, balance), interestRate(nInterestRate) {}

void SavingAccount::display() {
    cout << "Savings Account\n";
    cout << getOwnerName() << "\n";
    cout << "Balance: " << getBalance() << "\n";
    cout << "Interest Rate: " << interestRate << "%" << "\n";
}