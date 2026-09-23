#include <iostream>

using namespace std;

int main() {

    int num[7] = {10, 20, 30, 40, 50, 60};

    /*  Before:
        10 20 30 40 50 60

        After:
        10 20 30 35 40 50 60
    */

    int index = 3;
    int value = 35;

    for (int i = 6; i > index; i--) {
        num[i] = num[i - 1];
    }

    num[3] = value;

    for (int i = 0; i < 7; i++) {
        cout << num[i] << " ";
    }

    return 0;
}