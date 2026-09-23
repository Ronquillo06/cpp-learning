#include <iostream>
#include <vector>

using namespace std;

int main()
{


    int secret = 7;
    int tries = 3;
    bool correct = false;

    for (int i = 0; i < tries; i++)
    {
        int guess;
        cout << "Guess: ";
        cin >> guess;

        if (guess == secret)
        {
            cout << "Correct!\n";
            correct = true;
            break;
        } 
        else if (guess < secret)
        {
            cout << "Too Low!\n";
        }
        else
        {
            cout << "Too High!\n";
        }
    }

    if (correct == true)
    {
        cout << "Well Done Mate!\n";
    } 
    else
    {
        cout << "Try Again Mate!\n";
    } 

    return 0;
}