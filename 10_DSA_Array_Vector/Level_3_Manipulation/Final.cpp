#include <iostream>

using namespace std;

int main() {

    int num[10] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};

    int k = 3;

    //20 25 30 35 40 45 50 5 10 15

    int temp[3];

    for(int i = 0; i < k; i++) {
        temp[i] = num[i];
    }

    for(int i = 0; i < 7; i++) {
        num[i] = num[i + k];
    }

    for(int i = 0; i < k; i++) {
        num[7 + i] = temp[i];
    }

    for(int i = 0; i < 10; i++) {
        cout << num[i] << " ";
    }

    return 0;
}