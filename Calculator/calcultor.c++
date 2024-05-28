#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "****************Calculator****************" << endl;
    cout << "**********Calculator**********" << endl;

    int addition, subtraction, multiplication, power, division, num, number1, number2;
    cout << "Enter 1 for Addition" << endl;
    cout << "Enter 2 for Subtraction" << endl;
    cout << "Enter 3 for Multiplication" << endl;
    cout << "Enter 4 for Division" << endl;
    cout << "Enter 5 for Power" << endl;
    cout << "Enter 6 for exit" << endl;
    cin >> num;

    switch (num)
    {
    case 1:
        cout << "Enter first Number:" << endl;
        cin >> number1;
        cout << "Enter seocnd Number:" << endl;
        cin >> number2;
        addition = number1 + number2;
        cout << "Addition: " << addition << endl;
        break;

    case 2:
        cout << "Enter first Number:" << endl;
        cin >> number1;
        cout << "Enter seocnd Number:" << endl;
        cin >> number2;
        subtraction = number1 - number2;
        cout << "Subtraction: " << subtraction << endl;
        break;

    case 3:
        cout << "Enter first Number:" << endl;
        cin >> number1;
        cout << "Enter seocnd Number:" << endl;
        cin >> number2;
        multiplication = number1 * number2;
        cout << "Multiplication: " << multiplication << endl;
        break;

    case 4:
        cout << "Enter first Number:" << endl;
        cin >> number1;
        cout << "Enter seocnd Number:" << endl;
        cin >> number2;
        multiplication = number1 * number2;
        cout << "Division: " << division << endl;
        break;

    case 5:
        cout << "Enter base:" << endl;
        cin >> number1;
        cout << "Enter range:" << endl;
        cin >> number2;
        power = pow(number1, number2);
        cout << number1 << " raised the power " << number2 << ":" << power << endl;
        break;

    case 6:
        exit(0);
        break;

    default:
        cout << "Invalid!" << endl;
        break;
    }
}