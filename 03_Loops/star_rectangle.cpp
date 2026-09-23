#include <iostream>
using namespace std;

int main()

{
    int row;
    int col;

    cout << "Enter Rows: ";
    cin >> row;

    cout << "Enter Columns: ";
    cin >> col;

    
    for (int i = 1; i <= row; i++) 
    {

        for (int j = 1; j <= col; j++) 
        {
            cout << "*";
        }
    
        cout << "\n";

    }
    return 0;
}