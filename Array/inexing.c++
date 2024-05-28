#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*
    int score[5];
    cout << "Enter the  " << 5 << " numbers " << endl;
    for (size_t i = 0; i < 5; i++)
    {
        cin >> score[i];
    }
    for (size_t i = 0; i < 5; i++)
    {
        score[i] = 3 * (i + 1);
        cout << score[i] << endl;
    }
    */
    /*
     int class_size[] = {15, 2, 3, 4, 5, 6, 7, 8, 9};
     for (auto value : class_size)
     {
         cout << "Value " << value << endl;
     }
     */

    //! We can also do the following if the size of an array is not declared

    /*
        int score[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

        int size = sizeof(score);
        cout << size << endl;
        int sum{0};

        for (int element : score)
        {
            sum = sum + element;
        }
        cout << sum << endl;
    */
    int score[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(score) / sizeof(score[0]);
    cout << size << endl;
    for (int i = 0; i < size; i++)
    {
        cout << score[i] << endl;
    }
}