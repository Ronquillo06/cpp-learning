#include <iostream>

int main() {

    std::string name;

    std::cout << "Enter Name: ";
    std::cin >> name;

    for (int i = 1; i < 6; i++) 
    {

        std::cout << name << "\n";
    }

    return 0;
}