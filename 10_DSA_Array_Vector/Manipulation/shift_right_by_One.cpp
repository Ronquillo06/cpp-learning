#include <iostream>

using namespace std;


int main() {

    int num[7] = {5, 10, 15, 20, 25, 30, 35};

    //35 5 10 15 20 25 30

    int temp = num[6];

    for (int i = 6; i > 0; i--) {
        num[i] = num[i - 1];
    }

    /*
    num[6] = num[5];
    num[5] = num[4];
    num[4] = num[3];
    num[3] = num[2];
    num[2] = num[1];
    num[1] = num[0];
    */

    num[0] = temp;


    for (int i = 0; i < 7; i++) {
        cout << num[i] << " ";
    }


    return 0;
}