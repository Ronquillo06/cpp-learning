#include "Bank.hpp"
#include <iostream>

using namespace std;

void Bank::addAccount(Account* account){
    accounts.push_back(account);
}
void Bank::displayAccount(){
        cout << "===== BANK ACCOUNTS =====\n";
        for (Account* account : accounts) {
            account->display();
        }
}