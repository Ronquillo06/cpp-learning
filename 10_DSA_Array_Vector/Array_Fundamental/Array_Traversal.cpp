#include <iostream>
//#include <iterator>
using namespace std;

int main() {

    int numbers[8] = {12, 5, 8, 20, 3, 15, 7, 10};

    for (int i = 0; i < 8; i++) {
        cout << "Index " << i << ": " << numbers[i] << "\n";
    }

    //won't work my compiler is old version c++14
    /*for (int i = 0; i < std::size(numbers); i++) {
    std::cout << "Index " << i << ": " << numbers[i] << "\n";
    }*/
   
    return 0;
}