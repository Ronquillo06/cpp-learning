#include <iostream>


using namespace std;

int main()
{
    int choice = 0;
    double balance = 0;
    double deposit = 0;

    do 
    {
        
        cout << "1. Check Balance\n";
        cout << "2. Deposit\n";
        cout << "3. Exit\n";
        cin >> choice;

        if (choice > 3 || choice <= 0)
        {
            cout << "Invalid Input\n";
        }
        else if (choice == 1)
        {
            if (balance <= 0)
            {
                cout << "You Don't Have Balance\n";
            } 
            else 
            {
                cout << "Your Balance Now: " << balance << "\n";
            }
        }
        else if (choice == 2)
        {
            cout << "Deposit Here: ";
            cin >> deposit;

            if (deposit > 0)
            {
                balance += deposit;
            }
            else
            {
                cout << "Invalid Deposit\n";
            }
        }
        else 
        {
            cout << "Bye Have a Grate Day! \n";
        }
        
        
       
    }

    while (choice != 3);

    return 0;
}