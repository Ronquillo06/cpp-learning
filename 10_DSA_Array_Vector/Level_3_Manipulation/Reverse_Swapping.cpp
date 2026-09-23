#include <iostream>

using namespace std;

int main() {

    int num[8] = {10, 20, 30, 40, 50, 60, 70, 80};

    //80 70 60 50 40 30 20 10

    int start = 0;
    int end = 7;

    while (start < end) {
        int temp = num[start];
        num[start] = num[end];
        num[end] = temp;

        start++;
        end--;
    }

    for (int i = 0; i < 8; i++) {

        cout << num[i] << " ";
    }

    return 0;
}