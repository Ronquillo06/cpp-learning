#include <iostream>

using namespace std;

int main() {

    int num[9] = {4, 8, 12, 16, 20, 24, 28, 32, 36};

    int k = 3;

    //28 32 36 4 8 12 16 20 24


    int temp[3];
    for(int i = 0; i < k; i++) {
        temp[i] = num[6 + i];
    }

    for(int i = 8; i >= k; i--) {
        num[i] = num[i - k];
    }

    for(int i = 0; i < k; i++) {
        num[i] = temp[i];
    }

    for(int i = 0; i < 9; i++) {
        cout << num[i] << " ";
    }


    return 0;
}