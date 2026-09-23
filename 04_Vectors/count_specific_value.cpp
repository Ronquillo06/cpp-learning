#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> num = {5, 3, 5, 2, 5, 8, 3};

    int appears = 0;
    
    for (int i = 0; i < num.size(); i++)
    {
        if (num[i] == 5)
        {
            appears++;
        }
    }

    cout << "5 appears " << appears << " times\n";

    return 0;
}