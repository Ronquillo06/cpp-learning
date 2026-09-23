#include <iostream>

int main() {
  
     //decclaration
     int num;  
    //ask for number
    std::cout << "Enter number: ";
    std::cin >> num;

    if (num > 0 && num % 2 == 0) {

        std::cout << "Input: " << num << "\n";
        std::cout << "Positive Even\n";

    } else if (num > 0 && num % 2 != 0) {

        std::cout << "Input: " << num << "\n";
        std::cout << "Positive Odd\n";

    } else if (num < 0 && num % 2 == 0) {
        
        std::cout << "Input: " << num << "\n";
        std::cout << "Negative Even\n";
         
    } else if (num < 0 && num % 2 != 0) {

        std::cout << "Input: " << num << "\n";
        std::cout << "Negative Odd\n";

    } else {
        std::cout << "Zero\n";
    }
    return 0;
}