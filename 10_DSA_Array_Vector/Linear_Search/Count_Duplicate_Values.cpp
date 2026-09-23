#include <iostream>

using namespace std;

int main() {

    int num[10] = {4, 7, 2, 7, 9, 4, 7, 5, 2, 8};

    int count = 0;

    for (int i = 0; i < 10; i++) {
        bool seen = false;

        for (int k = 0; k < i; k++) {
            if (num[i] == num[k]) {
                seen = true;
                break;
            }
        }
        if (seen) {
            continue;
        }

        for (int j = i + 1; j < 10; j++) {
            if (num[i] == num[j]) {
                count++;
                break;
            }
        }
    }

    cout << "Duplicate values: " << count << "\n";

    return 0;
}