#include <iostream>
#include "BankAccount.hpp"
using namespace std;

int main() {
    BankAccount myAccount("Henry", 1000, 123456789);
    int choice = 0;

    
    while (choice != 4) {
        cout << "\n===== BANK SYSTEM =====\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Display Account\n";
        cout << "4. Exit\n";
        cout << "Choose: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                double amount;
                cout << "Enter deposit amount: ";
                cin >> amount;
                myAccount.deposit(amount);
                break;
            }
            case 2: {
                double amount;
                cout << "Enter withdrawal amount: ";
                cin >> amount;
                myAccount.withdraw(amount);
                break;
            }
            case 3:
                myAccount.displayAccount();
                break;

            case 4:
                cout << "Thank you for using the Bank System. Goodbye!\n";
                break;

            default:
                cout << "Invalid choice! Please enter a number between 1 and 4.\n";
                break;
        }
    }

    return 0;
}