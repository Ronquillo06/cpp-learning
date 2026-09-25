#include <iostream>


using namespace std;

int main() {

    int num[6] = {10, 20, 30, 40, 50, 60};

    /*  Before:
        10 20 30 40 50 60

        After:
        60 10 20 30 40 50
    */

    int temp = num[5];

    for (int i = 5; i > 0; i--) {
         num[i] = num[i - 1];
    }

    num[0] = temp;

    for(int i = 0; i < 6; i++) {
        cout << num[i] << " ";
    }

    return 0;
}