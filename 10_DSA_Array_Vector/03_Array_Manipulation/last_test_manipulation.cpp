#include <iostream>

using namespace std;


int main() {

    int num[8] = {10, 20, 30, 40, 50, 60, 70, 80};

    //80 10 20 30 40 50 60 70

    int temp = num[7];

    for(int i = 7; i > 0; i--) {
        num[i] = num[i - 1];
    }

    num[0] = temp;

    for (int i = 0; i < 8; i++) {
        cout << num[i] << " ";
    }

    return 0;
}

