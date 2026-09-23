#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int num1 = 0;
    int total = 0;
    

    cout << "Enter NUmber: ";
    cin >> num1;

    for (int i = 1; i <= 12; i++)
    {
        total = num1 * i;

        cout << num1 << " x " << i << " = " << total << "\n";
    }


    return 0;
}