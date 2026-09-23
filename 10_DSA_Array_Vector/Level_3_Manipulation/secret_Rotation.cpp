#include <iostream>

using namespace std;

int main() {

    int num[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 100};

    int k = 2;

    //99 100 11 22 33 44 55 66 77 88

    int temp[2];

    for(int i = 0; i < k; i++) {
        temp[i] = num[8 + i]; 
    }

    for(int i = 10 - 1; i >= k; i--) {
        num[i] = num[i - k];
    }

    for(int i = 0; i < k; i++) {
        num[i] = temp[i];
    }

    for (int i = 0; i < 10; i++) {
        cout << num[i] << " ";
    }



    return 0;
}