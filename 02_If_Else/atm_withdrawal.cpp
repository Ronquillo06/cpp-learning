#include <iostream>

int main() {

    int pin;
    int balance;
    int amount;
    int remain;
    int receipt;

    std::cout << "Enter PIN: ";
    std::cin >> pin;

    if(pin == 1234) {
        std::cout << "Enter Balance: ";
    std::cin >> balance;

    std::cout << "Enter Withdraw amount: ";
    std::cin >> amount;

    if(balance >= amount) {
        std::cout << "Transaction Successful\n";
        std::cout << "Do you want to print the receipt? (1 = yes | 2 = no): ";
        std::cin >> receipt;
        if (receipt == 1){
            remain = (balance - amount);

                std::cout << "\n===== RECEIPT =====\n";
                std::cout << "Withdraw Amount: " << amount << '\n';
                std::cout << "Remaining Balance: " << remain << '\n';
                std::cout << "===================\n"; }

        else if (receipt == 2) {
            std::cout << "Thank you for Transaction!!\n";
        } else {
            std::cout << "Invalid Input\n";
        }

    }else {
        std::cout << "Insufficient Balance\n";
    }

    } else {
        std::cout << "Wrong Pin\n";
    }
return 0;
}