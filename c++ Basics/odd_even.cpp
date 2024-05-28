#include <iostream>
int main()

{
    using std::cin;
    using std::cout;
    using std::endl;

    int num1;
    cout << "Enter a number\n";
    cin >> num1;
    if (num1 % 2 == 0)
    {
        cout << num1 << " is even" << endl;
    }
    else
    {
        cout << num1 << " is odd" << endl;
    }
}