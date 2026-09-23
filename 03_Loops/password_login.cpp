#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int password = 1234;

    for (int i = 0; i < 3; i++)
    {
        int input_pass;
        cout << "Enter Password: ";
        cin >> input_pass;

        if (input_pass == password)
        {
            cout << "Access Granted!\n";
            break;
        }
        else 
        {
            cout << "Access Denied!\n";
        }
    }

    return 0;
}