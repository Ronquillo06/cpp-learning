#include <iostream>

int main(){


    int year;

    std::cout << "Enter a year: ";
    std::cin >> year;
    
    if (year >= 1000 && year <= 9999){

    if ((year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0 ) {

        std::cout << "Leap Year\n";

    } else {

        std::cout << "Not Leap Year\n";
    }
    } else {
        
        std::cout << "Enter valid year\n";
    
    }
    return 0;
}