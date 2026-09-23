#include "CheckingAccount.hpp"
#include <iostream>

using namespace std;

CheckingAccount::CheckingAccount(std::string ownerName, double balance, double transactionFee) : Account(ownerName, balance), transactionFee(transactionFee) {}

void CheckingAccount::display() {
    cout << "Checking Account\n";
    cout << getOwnerName() << "\n";
    cout << "Balance: " << getBalance() << "\n";
    cout << "Transaction Fee: " << transactionFee << "\n";
}