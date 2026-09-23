#include <iostream>

int main() 
{

    int num;

    std::cout << "Enter Number: ";
    std::cin >> num;

    for (int i = 1; i <= num; i++)
    
    {
        std::cout << "*\n";
    }

    return 0;
}