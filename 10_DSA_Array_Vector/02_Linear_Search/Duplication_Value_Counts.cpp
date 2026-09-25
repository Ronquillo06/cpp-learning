#include <iostream>

using namespace std;

int main() {

    int num[10] = {3, 5, 2, 3, 8, 3, 5, 2, 5, 5};

    int maxCount = 0;
    int mostFrequent = num[0];
    bool seen = false;

    for (int i = 0; i < 10; i++) {
        int count = 1;
        seen = false;
        
        for (int k = 0; k < i; k++) {
            if (num[i] == num[k]) {
                seen = true;
                break;
            }
        }
        if(seen) {
            continue;
        }
        for (int j = i + 1; j < 10; j++) {
            if (num[i] == num[j]) {
                count++;
            }
        }
        if (count > maxCount) {
                maxCount = count;
                mostFrequent = num[i];
            }

    }

    cout << "Most frequent value: " << mostFrequent << "\n";
    cout << "Occurrences: " << maxCount << "\n";

    return 0;
}