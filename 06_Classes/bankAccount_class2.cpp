// ==========================================
// SIMULATING: .hpp
// ==========================================
#include <iostream>
#include <string>

using namespace std;

class BankAccount
{
    public:
    string owner;
    double balance;

    void deposit(double amount);
    void withdraw(double amount);
    void showBalance();

};



// ==========================================
// SIMULATING: .cpp
// ==========================================
//#include "BankAccount.hpp"

void BankAccount::deposit(double amount)
{
    if(amount > 0)
    {
        balance += amount;
        cout << "Deposit Successful! Added: $" << amount << "\n";
    }
    else
    {
        
        cout << "Deposit Failed!\n";
    }
}

void BankAccount::withdraw(double amount)
{
    if (amount <= balance)
    {
        balance -= amount;
        cout << "Withdrawal Successful! Withdrew:: $" << amount << "\n";
    }
    else 
    {
        cout << "Transaction Failed: Insufficient funds!\n";
    }
}

void BankAccount::showBalance()
{
    cout << "\n";
    cout << "--- Account Info ---\n";
    cout << "Account Owner: " << owner << "\n";
    cout << "Current Balance: $" << balance << "\n";
    cout << "--------------------\n";
}


// ==========================================
// SIMULATING: main.cpp
// ==========================================

int main()
{

    BankAccount account1;
    account1.owner = "Alex Maya";
    account1.balance = 0.0;
    account1.showBalance();
    account1.deposit(1000.00);
    account1.withdraw(500.00);
    account1.showBalance();

    BankAccount account2;
    account2.owner = "Goyo Maya";
    account2.balance = 0.0;
    account2.showBalance();
    account2.deposit(0.00);
    account2.withdraw(1000.00);
    account1.showBalance();


    return 0;
}