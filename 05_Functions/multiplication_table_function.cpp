#include <iostream>

using namespace std;

void multiplicationTable()
{

    int num1 = 0;
    int answer = 0;

    cout << "Enter Number: ";
    cin >> num1;

    for (int i = 1; i <= 10; i++)
    {

        answer = i * num1;

        cout << num1 << " x " << i << " = " << answer << "\n";

    }


}

int main()
{

    multiplicationTable();


    return 0;
}