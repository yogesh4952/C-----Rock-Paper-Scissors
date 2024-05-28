// WAP to sort the given string

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main()

{
    string name = "Yogesh";
    for (char i = 0; i <= name.length(); i++)

    {

        char max = name[0];
        if (max > name[i])
        {
            max = name[i];
        }
        cout << max;
    }
}