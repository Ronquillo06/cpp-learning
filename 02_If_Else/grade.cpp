#include <iostream> 

int main() {

int grade;

std::cout << "Enter Student Grade: ";
std::cin >> grade;

if (grade >= 75) {
    std::cout << "PASSED\n";
} else if (grade <= 74) {
    std::cout << "FAILED\n";
} else {
    std::cout << "Enter valid grade\n";
}

    return 0;
}