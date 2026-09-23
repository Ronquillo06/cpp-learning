#include "Account.hpp"
#include <iostream>

using namespace std;

Account::Account(std::string newOwnerName, double newBalance) : ownerName(newOwnerName), balance(newBalance) {}

string Account::getOwnerName(){
    return ownerName;
}
double Account::getBalance(){
    return balance;
}
void Account::display(){
    cout << ownerName << "\n";
    cout << "Balance: " << balance << "\n";
} 

void Account::deposit(const double& amount){
    if (amount > 0){
        balance += amount;
        string blurredName = ownerName;
        for (int i = 2; i < blurredName.length(); i++) {
            if (blurredName[i] != ' ') {
                blurredName[i] = '*';
                //if we also need to "*" space remove condition
            }
        }
        cout << "Bank Account: " << blurredName << "\n";
        cout << "Deposit Successful!\n";
        std::cout << "\n=========================\n\n";
        

    } else {
        cout << "Deposit a valid Amount\n";
    }
}
void Account::withdraw(const double& amount){
    if (amount > 0 && amount <= balance) {
        balance -= amount; 
        string blurredName = ownerName;
        for (int i = 2; i < blurredName.length(); i++) {
            if (blurredName[i] != ' ') {
                blurredName[i] = '*';
                //if we also need to "*" space remove condition
            }
        }
        cout << "Bank Account: " << blurredName << "\n";
        cout << "Withdrawal Successful!\n";
        std::cout << "\n=========================\n\n";
    } else {
        cout << "Insuficient balance\n";
    }
}

/*string Account::getBlurredName(){
    if (ownerName.length() <= 2) {
        return ownerName;
    }

    
    string masked = ownerName; 
    
    for (size_t i = 2; i < masked.length(); i++) {
        masked[i] = '*';
    }
    return masked;
}*/