#include <iostream>

using namespace std;

int main() {

    int num[12] = {15, 7, 23, 7, 42, 9, 23, 18, 7, 31, 42, 5};

    int target;
    int first = -1;
    int last = -1;
    int count = 0;
    int sum = 0;

    cout << "Enter Target: ";
    cin >> target; 


    for (int i = 0; i < 12; i++) {
        if(num[i] == target) {
            if(count == 0) {
                first = i;
            }
            last = i;
            count++;
            sum += num[i];
        }
        
    }

        if (count > 0) {
            cout << "Target Found! \n\n";
            cout << "First occurrence: " << first << "\n";
            cout << "Last occurrence: " << last << "\n";
            cout << "Total occurrences: " << count << "\n"; 

            cout << "Indeices:\n";
            for (int i = 0; i < 12; i++) {
                if(num[i] == target) {
                    cout << i << " ";
                }
            }
            cout << "\n";
            cout << "Sum of occurrences: " << sum << "\n";
        } else {
            cout << "Target not found.\n";
        }
    


    return 0;
}