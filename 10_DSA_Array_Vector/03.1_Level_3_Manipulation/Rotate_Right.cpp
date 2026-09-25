#include <iostream>

using namespace std;


int main() {

    int num[10] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};

    int k = 4;
    int n = 10;

    //35 40 45 50 5 10 15 20 25 30

    int temp[4];

    for(int i = 0; i < k; i++) {
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
