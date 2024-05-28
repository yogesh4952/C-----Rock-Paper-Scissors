#include <iostream>
#include <cmath>
#include <string>
#include <time.h>

using namespace std;

int main()
{

    string guess;
    string result = "";
    string choice;
    do
    {
        srand(time(NULL));

        int randomNumber = rand() % 9 + 1;
        // cout << randomNumber << endl;

        if (randomNumber < 3 && randomNumber >= 1)
        {
            choice = "Rock";
        }
        else if (randomNumber >= 3 && randomNumber < 6)
        {
            choice = "Paper";
        }

        else if (randomNumber >= 6 && randomNumber <= 9)
        {
            choice = "Scissors";
        }
        // cout << choice << endl;
        cout << endl;
        cout << endl;

        cout << "Enter guess" << endl;
        cin >> guess;

        if (choice == "Rock")
        {
            if (guess == "Rock")
            {
                result = " You Tied";
            }
            else if (guess == "Paper")
            {
                result = " You Win!";
            }
            else if (guess == "Scissors")
            {
                result = " You loose!";
            }
            else
            {
                result = "Invalid Input!";
            }
            cout << "You choose " << guess << " Computer choose " << choice << result << endl;
        }
        else if (choice == "Paper")
        {
            if (guess == "Rock")
            {
                result = " You Loose";
            }
            else if (guess == "Paper")
            {
                result = " You Tied!";
            }
            else if (guess == "Scissors")
            {
                result = " You Win!";
            }
            else
            {
                result = "Invalid Input!";
            }
            cout << "You choose " << guess << " Computer choose " << choice << result << endl;
        }

        else if (choice == "Scissors")
        {
            if (guess == "Rock")
            {
                result = " You Win!";
            }
            else if (guess == "Paper")
            {
                result = " You Loose!";
            }
            else if (guess == "Scissors")
            {
                result = " You Tied!";
            }
            else
            {
                result = "Invalid Input!";
            }
            cout << "You choose " << guess << " Computer choose " << choice << result << endl;
        }

    } while (result != " You Win!");
    return 0;
}