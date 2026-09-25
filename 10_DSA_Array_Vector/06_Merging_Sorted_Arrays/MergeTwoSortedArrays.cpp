#include <iostream>

using namespace std;

int main() {

    int a[5] = {1, 4, 7, 10, 15};
    int b[5] = {2, 3, 8, 11, 20};
    
    int result[10];

    int i = 0;
    int j = 0;
    int k = 0;

    // Step 1: Compare elements from both arrays and insert the smaller one
    while(i < 5 && j < 5) {
        if(a[i] < b[j]) {
            result[k] = a[i];
            i++;        
        } else {
            result[k] = b[j];
            j++;
        }
        k++;
    }
    // Step 2: Copy any remaining elements from array a (if any)
    while(i < 5) {
        result[k] = a[i];
        i++;
        k++;
    }
    // Step 3: Copy any remaining elements from array b (if any)
    while(j < 5) {
        result[k] = b[j];
        j++;
        k++;
    }

    // print
    cout << "Merged array: ";
    for (int idx = 0; idx < 10; idx++) {
        cout << result[idx] << " ";
    }
    cout << "\n";

    return 0;
}