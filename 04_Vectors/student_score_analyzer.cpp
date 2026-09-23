#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int scores = 0;

    cout << "How many Scores: ";
    cin >> scores;


    vector<double> user_scores;

    for (int i = 0; i < scores; i++)
    {
        double score;
        cout << "Enter score: ";
        cin >> score;

        user_scores.push_back(score);
    }

    double highest = 0;


    for (int i = 0; i < user_scores.size(); i++)
    {
        if (user_scores[i] > highest)
        {
            highest = user_scores[i];
        }
    }

    double lowest = user_scores[0];

    for (int i = 0; i < user_scores.size(); i++)
    {
        if (user_scores[i] < lowest)
        {
            lowest = user_scores[i];
        }
    }

    double average = 0;
    double total = 0;
    

    for (int i = 0; i < user_scores.size(); i++)
    {
        total += user_scores[i];

        average = total / user_scores.size();
        
    }

    cout << "Highest Score: " << highest << "\n";
    cout << "Lowest Score: " << lowest << "\n";
    cout << "Average Score: " << average << "\n";

    return 0;
}