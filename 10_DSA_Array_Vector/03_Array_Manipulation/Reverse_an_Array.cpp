#include <iostream>

using namespace std;

int main() {

    int numbers[6] = {10, 20, 30, 40, 50, 60};
    int start = 0;
    int end = 5;

    while (start < end) {

        int temp = numbers[start];
        numbers[start] = numbers[end];
        numbers[end] = temp;

        start++;
        end--;
    }


    for (int i = 0; i < 6; i++) {
        cout << numbers[i] << " ";
    }

    return 0;
}