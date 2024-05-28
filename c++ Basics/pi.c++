#include <iostream> // Including the input-output stream header file
#include <iomanip>  // Including the header file for formatted I/O

using namespace std;
int main()
{
    cout << "\n\n Formatting the output: \n"; // Outputting a message to indicate formatted output

    cout << "...................................................\n"; // Outputting a seprate line;

    double pi = 3.14159265;

    cout << fixed << setprecision(4); // Output format fixed to 4 decimal places

    cout << "The value of pi : " << pi << endl; // Displaying pi with 4th decimal places;(3.1416)

    cout << "The value of pi 4 decimal places if total width 8 : |" << setw(8) << pi << endl; // Dsiplaying pi with 4 decimal place with the width of 8;

    cout << setfill('-'); // Setting the fill character to '-';

    cout << "The value of pi 4 decimal places with width 8 :|" << setw(8) << pi << "|" << endl; // width vannale total 8 ota samma atne banaune ho ra fill ley chai khali vako element ma -- thapxa jati ota khali teti -;

    cout << "The value of pi 4 decimal places with width 10 :|" << setw(10) << pi << "|" << endl; // width vanda sano value xa vane space add hunxa;

    cout << scientific;                                                // Setting the output format to scientific notation output nai sabai aba espaxi scinetific ma;
    cout << "The value of pi in scientifi format is : " << pi << endl; // Displaying pi in scinetific notation;

    // cout << "The value of pi in scientific format is : " << scientific << pi << endl;

    // To reset the format into notmal we use fixed;

    cout << fixed;
    cout << pi; // This gives normal values

    bool done = false;

    cout << "Status in number: " << done << endl; // Displaying the boolean variable in number (0 or 1);

    cout << boolalpha;                              // Formatting the output format in alphbet value
    cout << "Status in alphabet: " << done << endl; // False
}