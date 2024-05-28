#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
    /*
    string name = "Yogesh";
     string cast = "Shah";
     cout << name << " " << cast << endl;

     // Input linaka lagi
     string str;
     cin >> str;
     cout << str;
     // Esma duita word dida euta matra print hunxa to avoid this we use getline() . it takes two parameters;

    string name;
    getline(cin, name);
    cout << name << endl;
    int length = name.length();
    cout << length;

    reverse(name.begin(), name.end());
    cout << name;

    for (char a = 0; a < length; a++)
    {
        cout << name[a] << endl;
    }
    To find the substring vannale name bhitrako kunai portion matra activate garne vaye we use this

    syntax:

    substr(beginningposition, ending position);

    .Example

    string name = "Bhalu";
    string lund = name.substr(1, 3);
    cout << lund << endl;
    // Output will be hal

    //!  '+' operator -> i=only used in string not in character array .


    string s1 = "Lovely";
    string s2 = "Ko Bau";
    s1 = s1 + s2;
    cout << s1 << endl;

    In the case of character array we use
    'strcat()'
    char s1[] = "Yog";
    char s2[] = "esh";
    // char lovely[] = strcat(s1, s2);Here we cannot do this so
    char lovely[strlen(s1) + strlen(s2) + 1];
    strcpy(lovely, s1);
    //! Paila suru copy garera halne ani catenation garne;
    strcat(lovely, s2);

    cout << s1 << endl;
    cout << lovely << endl;

    //!  To apend -> variablename.push(push garne character)

    Example

    string s1 = "Yoges";
    char ch = 'h';
    s1.push_back(ch);
    cout << s1;
    */
    string s1 = "Yoges";
    int length = s1.size();
    cout << length << endl;
    char arr[] = "BHalu";
    cout << strlen(arr) << endl;

    // We can also convert the integer into stirng

    int num = 14;
    string bhals = to_string(num);
    cout << bhals << endl;
}
