#include <iostream>
#include <vector>

using namespace std;

bool searchNumber(vector<int> nums, int target)
{

    for (int i = 0; i < nums.size(); i++)
    {
        if (target == nums[i])
        {
            return true;
        }
    }

    return false;

}

int main()
{

    vector<int> num1 = {10, 20, 30, 40, 50, 60, 70, 80, 90};

    bool search = searchNumber(num1, 40);

    cout << boolalpha;
    cout << "Search Result: " << search << "\n";


    return 0;
}