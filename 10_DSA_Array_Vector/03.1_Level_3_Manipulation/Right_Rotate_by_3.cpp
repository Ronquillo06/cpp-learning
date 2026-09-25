#include <iostream>

using namespace std;

int main() {

    int num[9] = {5, 10, 15, 20, 25, 30, 35, 40, 45};

    int k = 3;
    int n = 9;

    /*
    Before:
    5 10 15 20 25 30 35 40 45

    After:
    35 40 45 5 10 15 20 25 30
    */

    int temp[3];

    for (int i = 0; i < k; i++) {
        temp[i] = num[n - k + i];
    }

    for (int i = n - 1; i >= k; i--) {
        num[i] = num[i - k];
    }

    for(int i = 0; i < k; i++) {
        num[i] = temp[i];
    }

    for (int i = 0; i < n; i++) {
        cout << num[i] << " ";
    }

}