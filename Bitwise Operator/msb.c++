// Write a C program to check Most Significant Bit (MSB) of a number is set or not.

#include <iostream>
using namespace std;
int digit(int *n)
{
    int remainder, digit;
    while (*n != 0)
    {
        remainder = (*n) % 10;
        digit++;
        *n = *n / 10;
    }
    return digit;
}
int main()
{
    int n, num;
    cout << "Enter number of bits: \n";
    cin >> n;

    cout << "Enter numbers\n";
    cin >> num;
    int noofDigit = digit(&num);
    cout << noofDigit;
    // if (noofDigit > n)
    // {
    //     cout << "The entered no. of digits are greater than the required bits it overflow the size.\n";
    //     exit;
    // }
    // else if (noofDigit <= 0)
    // {

    //     int mask = 1 << (n - 1);

    //     //! Yesto nagarda hana euta bit extra ajhai add hunxa tei vayera thykka chaiyeko jati bit add hanna lai n-1 haneko haita
    //     if (num & mask)
    //         cout << "The msb is  set to the zero";
    //     else
    //         cout << "The MSB is does not set to the zero";
    // }
}