#include <iostream>

using namespace std;

int main() {

    int num[7] = {7, 3, 9, 2, 5, 1, 8};
    int n = 7;
    /*  [7, 3, 9, 2, 5, 1, 8]

        ↓ Selection Sort

        [1, 2, 3, 5, 7, 8, 9]
    */

   for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (num[j] < num[minIndex]) {
                minIndex = j; 
            }
        }

        int temp = num[i];
        num[i] = num[minIndex];
        num[minIndex] = temp;
    }

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << num[i] << " ";
    }
    cout << "\n";

    return 0;
}