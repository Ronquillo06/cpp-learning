#include <iostream>

int main() {



    int a;
    int b;
    int c;

    std::cout << "Enter side a: ";
    std::cin >> a;
    std::cout << "Enter side b: ";
    std::cin >> b;
    std::cout << "Enter side c: ";
    std::cin >> c;

    if(a+b > c && a+c > b && b+c > a) {
        std::cout << "Valid Triangle\n";
    } else {
        std::cout << "Invalid Triangle\n";
    }
    return 0;
}