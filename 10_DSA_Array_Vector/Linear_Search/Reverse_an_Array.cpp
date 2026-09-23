#include <iostream>

using namespace std;


int main() {

    int num[6] = {10, 20, 30, 40, 50, 60};

    int start = 0;
    int end = 5;

    while (start < end) {

        int temp = num[start];
        num[start] = num[end];
        num[end] = temp;

        start++;
        end--;
    }

    for (int i = 0; i < 6; i++) {
        cout << num[i] << " ";
    }

    return 0;
}