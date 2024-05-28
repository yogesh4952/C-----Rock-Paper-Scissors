#include <iostream>
using namespace std;
int main()
{
    int a = 54;
    cout << "Before increment a: " << a << endl;
    a++;
    cout << "post increment a: " << a << endl;
    ++a;
    cout << "pre increment a: " << a << endl;
    a--;
    cout
        << "post decrement a: " << a << endl;
    --a;
    cout
        << "pre decrement a: " << a << endl;
}