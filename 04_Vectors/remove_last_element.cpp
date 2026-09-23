#include <iostream>
#include <vector>

using namespace std;

int main()

{

    vector<int> num = {10, 20, 30, 40, 50};

    num.pop_back();

    for (int i = 0; i < num.size(); i++)
    {
        cout << num[i] << "\n";
    }


    return 0;
}