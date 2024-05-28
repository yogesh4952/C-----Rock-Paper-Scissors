#include <iostream>
using namespace std;

// Function to convert Celsius to Fahrenheit
double temperatureConversionFahrenheit(double temp)
{
    return (temp * 9 / 5) + 32;
}

// Function to convert Fahrenheit to Celsius
double tempConCelsius(double temp)
{
    return (temp - 32) * 5 / 9;
}

int main()
{
    double celsius, fahrenheit, result;
    int num;

    cout << "Enter 1 to convert to Fahrenheit" << endl;
    cout << "Enter 2 to convert to Celsius" << endl;
    cin >> num;

    switch (num)
    {
    case 1:
        cout << "Enter temperature (in Celsius):" << endl;
        cin >> celsius;
        result = temperatureConversionFahrenheit(celsius);
        cout << "The temperature of " << celsius << "°C in Fahrenheit is: " << result << "°F" << endl;
        break;

    case 2:
        cout << "Enter temperature (in Fahrenheit):" << endl;
        cin >> fahrenheit;
        result = tempConCelsius(fahrenheit);
        cout << "The temperature of " << fahrenheit << "°F in Celsius is: " << result << "°C" << endl;
        break;

    default:
        cout << "Invalid choice!" << endl;
        break;
    }

    return 0;
}
