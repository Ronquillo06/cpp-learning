#include <iostream>

using namespace std;


int main() {

    int scores[8] = {78, 92, 85, 60, 45, 90, 88, 70};

    double average;
    double total = 0;
    int count = 0;

    for (int i = 0; i < 8; i++) {
        total += scores[i];
    }
    average = total / 8;

    for (int i = 0; i < 8; i++) {
        
        if (scores[i] > average) {
            count++;
        }
    }

    cout << "Average score: " << average << "\n";
    cout << "Scores above average: " << count << "\n";

    return 0;
}