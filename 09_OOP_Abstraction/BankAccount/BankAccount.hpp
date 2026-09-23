#pragma once
#include <string>

class BankAccount {
    private:
        std::string accountHolder;
        double balance;
        int accountNumber;
    public:
        BankAccount(std::string nAccountHolder, double nBalance, int nAccountNumber);
        void deposit(double amount);
        void withdraw(double amount);
        void displayAccount();
};