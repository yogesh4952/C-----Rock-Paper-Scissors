#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
    // string name = "Yogesh";
    // reverse(name.begin(), name.end());
    // cout << name << endl;

    string name = "Yogesh";
    int n = name.length();
    for (int i = 0; i <= n / 2; i++)
    {
        char temp = name[i];
        name[i] = name[n - i - 1];
        name[n - i - 1] = temp;
    }
    cout << "Reversed name: " << name << endl;
}