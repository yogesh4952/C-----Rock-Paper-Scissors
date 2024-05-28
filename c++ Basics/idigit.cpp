#include <iostream>
int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    int num1;
    cin >> num1;

    int result = num1 % 10;
    cout << result << "\t" << endl;
    num1 = num1 / 10;
    result = num1 % 10;
    cout << result << "\t" << endl;
    num1 = num1 / 100;
    result = num1 % 10;
    cout << result << "\t" << endl;
    num1 = num1 / 1000;
    result = num1 % 10;
    cout << result << "\t" << endl;
    num1 = num1 / 10000;
    cout << result << "\t" << endl;
}