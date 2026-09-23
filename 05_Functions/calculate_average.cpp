#include <iostream>
#include <vector>

using namespace std;

double average(vector<double> nums)
{
    
    double total = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        total += nums[i];
    }

    return total / nums.size();
}

int main()
{

    vector<double> grades = {99, 98, 97, 90, 96, 95};


    double total_average = average(grades);

    cout << "Average: " << total_average << "\n";


    return 0;
}