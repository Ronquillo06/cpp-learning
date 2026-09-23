#include <iostream>
#include <vector>

using namespace std;

int main()
{


    vector<int> numbers;

    int num1;
    cout << "Enter Numbers: ";
    cin >> num1;

    for (int i = 0; i < num1; i++)
    {
        int user_num;
        cout << "Enter Number: ";
        cin >> user_num;

        numbers.push_back(user_num);
    }

    int largest = 0;

    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] > largest)
        {
            largest = numbers[i];
        }
    }

    int lowest = numbers[0];

    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] < lowest)
        {
            lowest = numbers[i];
        } 
    }

    int sum = 0;

    for (int i = 0; i < numbers.size(); i++)
    {
        sum += numbers[i];
    }

    int even = 0;

    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] % 2 == 0)
        {
            even++;
        }
    }

    int odd = 0;

    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] % 2 != 0)
        {
            odd++;
        }
    }

    cout << "Largest: "<< largest << "\n";
    cout << "Lowest: " << lowest << "\n";
    cout << "Sum: " << sum << "\n";
    cout << "Even Count: " << even << "\n";
    cout << "Odd Count: " << odd << "\n";


    return 0;

}