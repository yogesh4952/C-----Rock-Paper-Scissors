#include <iostream>
int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    int num1, num2;
    cin >> num1 >> num2;

    if (num1 % num2 == 0)
    {
        cout << num1 << " is the multiple of " << num2 << endl;
    }
    else if (num2 % num1 == 0)
    {
        cout << num2 << " is the multiple of " << num1 << endl;
    }
    else
    {
        cout << "None";
    }
}