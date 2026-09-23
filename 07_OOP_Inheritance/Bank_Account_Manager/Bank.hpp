#pragma once
#include <vector>
#include "Account.hpp"
class Bank {
    private:
        std::vector<Account*> accounts;
    public:
        void addAccount(Account* account);
        void displayAccount();
};