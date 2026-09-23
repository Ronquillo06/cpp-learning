#include <iostream>
#include <vector>

using namespace std;

int main()
{

    

    int number;
    int digits = 0;

    cout << "Enter number: ";
    cin >> number;

    while (number > 0)
    {
        number = number / 10;
        digits++;
    }

    cout << "Digits: " << digits << "\n";


    return 0;
}