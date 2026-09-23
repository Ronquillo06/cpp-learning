// ==========================================
// SIMULATING: BankAccount.hpp
// ==========================================
#include <iostream>
#include <string>

using namespace std;

class BankAccount 
{

    //attributes
    private: 
    double balance;

    //method
    public:
    BankAccount(double startBalance);
    void deposit(double amount);
    bool withdraw(double amount);
    double getBalance();

};

// ==========================================
// SIMULATING: BankAccount.cpp
// ==========================================

BankAccount::BankAccount(double startBalance)
{
    balance = startBalance;
}

void BankAccount::deposit(double amount)
{
    balance += amount;
}
bool BankAccount::withdraw(double amount)
{
    if (balance >= amount)
    {
        balance = balance - amount;

        return true;
    }
    else
    {
        cout << "Insufficient funds!\n";
        return false;
    }

}

double BankAccount::getBalance()
{
    return balance;
}

// ==========================================
// SIMULATING: main.cpp
// ==========================================

int main()
{

    BankAccount myAccount(100.00);
    myAccount.deposit(50.00);
    if (myAccount.withdraw(100.00))
    {
        cout << "Withdrawal successful!\n";
    }
    else
    {
        cout << "Withdrawal failed!\n";
    }

    cout << "Current Balance: $" << myAccount.getBalance() << "\n";



    return 0;
}