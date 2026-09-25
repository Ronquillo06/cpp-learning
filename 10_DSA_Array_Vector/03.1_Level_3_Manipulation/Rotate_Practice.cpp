#include <iostream>

using namespace std;

int main() {

    int num[8] = {10, 20, 30, 40, 50, 60, 70, 80};

    int k = 2;
    int n = 8;

    //After:
    //70 80 10 20 30 40 50 60

    int temp[2];
    for (int i = 0; i < k; i++) {
        temp[i] = num[n - k + i];
    }

    for (int i = n - 1; i >= k; i--) {
        num[i] = num[i - k];
    }

    for (int i = 0; i < k; i++) {
        num[i] = temp[i];
    }

    for (int i = 0; i < n; i++) {
        cout << num[i] << " ";
    }

    return 0;
}