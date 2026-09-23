#include <iostream>

using namespace std;

int main() {

    int num[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    int k = 5;
    int n = 10;

    //60 70 80 90 100 10 20 30 40 50

    int temp[5];
    
    for (int i = 0; i < k; i++) {
        temp[i] = num[n - k + i];
    }

    for(int i = n - 1; i >= k; i--) {
        num[i] = num[i - k];
    }

    for(int i = 0; i < k; i++) {
        num[i] = temp[i];
    }

    for (int i = 0; i < n; i++) {
        cout << num[i] << " ";
    }


    return 0;
}