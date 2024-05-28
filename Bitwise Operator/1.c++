// Write a C program to check Least Significant Bit (LSB) of a number is set or not.
#include <iostream>
using namespace std;
int main()
{
    int num;
    int fixed = 1;
    cout << "Enter a number in binary:\n";
    cin >> num;
    if (num & fixed == 0)
    {
        cout << "The LSB is set to the zero.\n";
    }
    else
    {
        cout << "The LSB is not set to the zero.\n";
    }
}