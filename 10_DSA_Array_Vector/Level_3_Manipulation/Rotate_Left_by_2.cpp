#include <iostream>

using namespace std;

int main() {

    int num[8] = {10, 20, 30, 40, 50, 60, 70, 80};

    /*  Before:
        10 20 30 40 50 60 70 80

        After:
        30 40 50 60 70 80 10 20
    */
    int k = 2;
    int n = 8;

    int temp[k];
    for (int i = 0; i < k; i++) {
        temp[i] = num[i];
    }

    for (int i = 0; i < n - k; i++) {
        num[i] = num[i + k];
    }

    for (int i = 0; i < k; i++) {
        num[n - k + i] = temp[i];
    }

    for (int i = 0; i < n; i++) {
        cout << num[i] << " ";
    }


    return 0;
}