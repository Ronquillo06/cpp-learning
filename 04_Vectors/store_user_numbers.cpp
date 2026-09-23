#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int amount;
    cout << "How many numbers? ";
    cin >> amount;

    vector<int> numbers;

    for (int i = 0; i < amount; i++)
    {
        int number;
        cout << "Enter Num: ";
        cin >> number;

        numbers.push_back(number);
    }

    for (int j = 0; j < numbers.size(); j++)
    {
        cout << numbers[j] << "\n"; 
    }

    return 0; 
}