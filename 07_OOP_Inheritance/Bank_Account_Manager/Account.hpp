#pragma once
#include <string>

class Account {
    private:
        std::string ownerName;
        double balance;
    public:
        Account(std::string newOwnerName, double newBalance);
        std::string getOwnerName();
        double getBalance();
        virtual void display();
        void deposit(const double& amount);
        void withdraw(const double& amount);
};