#pragma once
#include "Account.hpp"

class CheckingAccount : public Account {
    private:
        double transactionFee;
    public:
        CheckingAccount(std::string ownerName, double balance, double transactionFee);
        void display() override;
};