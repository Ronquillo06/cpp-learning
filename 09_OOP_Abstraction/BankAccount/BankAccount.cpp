#include <iostream>
#include "BankAccount.hpp"

using namespace std;

BankAccount::BankAccount(std::string nAccountHolder, double nBalance, int nAccountNumber)
        : accountHolder(nAccountHolder), balance(nBalance), accountNumber(nAccountNumber) {}

void BankAccount::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
        cout << "Deposit: " << amount << "\n";
    } else {
        cout << "Invalid amount.\n";
    }
}
void BankAccount::withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        cout << "Withdraw: " << amount << "\n";
    } else {
        cout << "Invalid amount.\n";
    }
}
void BankAccount::displayAccount() {
    cout << "===== BANK ACCOUNT =====\n";
    cout << "Account Holder: "  << accountHolder << "\n";
    cout << "Account Number: " << accountNumber << "\n";
    cout << "Balance: " << balance << "\n"; 
    cout << "========================\n";
}