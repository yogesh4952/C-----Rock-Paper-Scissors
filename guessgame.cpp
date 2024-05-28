#include <iostream>
#include <time.h>
#include <cmath>
using namespace std;
int main()

{
    int guess;
    int random;
    int tries = 1;

    srand(time(NULL));
    random = rand() % 10 + 1;
    cout << random;
    cout << "Enter your guess(1-10): " << endl;

    do
    {
        cin >> guess;
        if (guess == 0)
        {
            cout << "Exiting the ga me." << endl;
        }

        if (guess == random)
        {
            cout << "Congratulation! You succesfully guessed the number " << endl;
            // tries++;
            break;
        }
        else
        {
            cout << "Try again" << endl;
            tries++;
        }
    } while (guess != random);

    cout
        << "You tries total " << tries << " Times to win!" << endl;
}