#include <iostream>


using namespace std;

int main() {

    int num[10] = {15, 27, 33, 41, 18, 25, 42, 50, 63, 72};

    /*
    First even number: 18
    Index: 4
    */

    int firstEven = -1;
    int index = -1;

    for (int i = 0; i < 10; i++) {
        if (num[i] % 2 == 0) {
            firstEven = num[i];
            index = i;
            break;
        }
    }

    if (index != -1) {
        cout << "First even number: " << firstEven << "\n";
        cout << "Index: " << index << "\n";
    } else {
        cout << "No even number found\n";
    }


    return 0;
}