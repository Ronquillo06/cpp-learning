#include <iostream>

using namespace std;

int main() {

    int num[6] = {10, 20, 30, 40, 50, 60};

    /*Before:
    10 20 30 40 50 60

    After:
    20 30 40 50 60 10*/

    int temp = num[0];

    for (int i = 0; i < 5; i++) {
        num[i] = num[i + 1];
    }

    num[5] = temp;
    /*num[0] = num[1];
    num[1] = num[2];
    num[2] = num[3];
    num[3] = num[4];
    num[4] = num[5];
    num[5] = temp;*/

    for (int i = 0; i < 6; i++) {
        cout << num[i] << " ";
    }

    return 0;
}