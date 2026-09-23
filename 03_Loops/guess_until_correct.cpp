#include <iostream>

using namespace std;

int main()
{

    int secret = 6;
    int guess;

    
    while (guess != secret)
    {
        cout << "Enter Number: ";
        cin >> guess;

        if (guess == secret)
        {
            cout << "Correct!\n";
        }
    }


    return 0;
}