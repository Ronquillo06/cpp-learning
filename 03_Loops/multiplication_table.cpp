#include <iostream>
using namespace std;

int main()
{
    int num;
    int product;

    cout << "Enter number: ";
    cin >> num;

    for (int i = 1; i <= 10; i++)
    {
        product = num * i;

        cout << num << " x "
             << i << " = "
             << product << "\n";
    }

    return 0;
}