#include <iostream>

using namespace std;

int main() {

    int num[7] = {7, 3, 9, 2, 5, 1, 8};
    int n = 7;

    for(int i = 0; i < n - 1; i++) {
       for(int j = 0; j < n - 1 - i; j++) {
        if(num[j] > num[j + 1]) {
            int temp = num[j];
            num[j] = num[j + 1];
            num[j + 1] = temp;
        }
       }
    }

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << num[i] << " ";
    }
    cout << "\n";

    return 0;
}