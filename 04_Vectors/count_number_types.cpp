#include <iostream>
#include <vector>

using namespace std;

int main() 
{

    vector<int> num = {5, -2, 10, -8, 0, 3, -1};

    int positive_num = 0;
    int negative_num = 0;
    int zeroes = 0;


    for (int i = 0; i < num.size(); i++) 
    {
        if (num[i] > 0)
        {
            positive_num++;
        }
        else if (num[i] < 0) 
        {
            negative_num++;
        } else 
            {
                zeroes++;
            }
    }

    cout << "Positive Numbers: "  << positive_num << "\n";
    cout << "Negative Numbers: " << negative_num << "\n";
    cout << "Zeroes: " << zeroes << "\n";

    return 0;
}