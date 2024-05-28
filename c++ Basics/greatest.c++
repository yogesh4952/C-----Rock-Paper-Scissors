#include <iostream>
int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    int num1, num2;
    cin >> num1 >> num2;

    if (num1 > num2)
    {
        cout << num1 << " Is greater than " << num2 << endl;
    }
    else
    {
        cout << num2 << " Is greater than " << num1 << endl;
    }
}