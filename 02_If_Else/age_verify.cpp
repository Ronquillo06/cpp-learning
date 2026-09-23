#include <iostream>

int main() {

    int age;

    std::cout << "Enter Your Age: ";
    std::cin >> age;

    if(age >= 18 && age <= 60){
        std::cout << "Access Granted\n";
    }else {
        std::cout << "Access Denied\n";
    }

    return 0;
}