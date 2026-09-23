#include <iostream>

int main() {


    int age;
    int student;

    std::cout << "Enter age: ";
    std::cin >> age;

    std::cout << "Age you a student? (1 = yes | 0 = no): ";
    std::cin >> student;

    if(age >= 60 || student == 1) {
        std::cout << "You got a discount!\n";
    } else {
        std::cout << "No discount.";
    }
    
    return 0;
}