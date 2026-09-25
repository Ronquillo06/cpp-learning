#include <deque>
#include <iostream>

using namespace std;

int main()
{
    // Enter your code here

    deque<int> numbers;

    int x;
    bool found = true;

    while(cin >> x && x != -1) {
            if (!found) {
                numbers.push_front(x);
                found = true;
            } else {
                numbers.push_back(x);
                found = !found;
            }
        }

    for(int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " "; 
    }
    return 0;
}