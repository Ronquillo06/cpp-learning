#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> even;

    vector<int> num = {2, 7, 8, 3, 10, 5};

    for (int i = 0; i < num.size(); i++)
    {
        if (num[i] % 2 == 0)
        {
            even.push_back(num[i]);
        }
    }


     cout << "Even Numbers: "  << even.size();

    return 0;
}