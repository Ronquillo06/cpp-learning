#include <iostream>

using namespace std;

int main() {

    int num[5] = {1, 2, 3, 4, 5};
    // 52341
    // 51234
    
    int temp = num[4];

    for (int i = 4; i > 0; i--) {
        num[i] = num[i - 1];
    }

    num[0] = temp;

    for (int i = 0; i < 5; i++) {
        cout << num[i];
    }

    return 0;
}