#include <iostream>

using namespace std;


int main() {

    int num[9] = {10, 20, 30, 40, 50, 60, 70, 80, 90};

    /*  Before:
        10 20 30 40 50 60 70 80 90

        After:
        40 50 60 70 80 90 10 20 30
    */

    int temp = num[0];
    int temp2 = num[1];
    int temp3 = num[2];

    for(int i = 0; i < 6; i++) {
        num[i] = num[i + 3];
    }

    num[6] = temp;
    num[7] = temp2;
    num[8] = temp3;

    for (int i = 0; i < 9; i++) {
        cout << num[i] << " ";
    }

    return 0;
}