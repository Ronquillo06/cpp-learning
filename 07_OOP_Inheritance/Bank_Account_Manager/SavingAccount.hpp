#pragma once
#include "Account.hpp"

class SavingAccount : public Account {
    private:
        double interestRate;
    public:
        SavingAccount(std::string ownerName, double balance, double nInterestRate);
        void display() override;
};