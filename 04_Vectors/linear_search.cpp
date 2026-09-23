#include <iostream>
#include <vector>

using namespace std;

int main() 
{

    vector<int> num = {10, 20, 30, 40, 50};

    int num1;
        cout << "Enter Number to Search: ";
        cin >> num1;

    bool found = false;
    for (int i = 0; i < num.size(); i++)
    {
        if (num[i] == num1)
        {
            found = true;
            break;
        } 
        
    }
    if (found == true)
    {
        cout << "Found!\n";
    } else 
    {
        cout << "Not found\n";
    }


    return 0;
}