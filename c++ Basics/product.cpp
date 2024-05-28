#include <iostream>
int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    // Use using to avoid redundancy or repetitve use case of std::

    int num1, num2, num3, product; // Declaring the varible for calcultaing the products

    cout << "Enter three numberss:\n"; // Display request message to the user to enter the number from the keyword
    cin >> num1 >> num2 >> num3;       // Take the value and store in the memory of the computer

    product = num1 * num2 * num3;                   // Calculating the product
    cout << "The product is : " << product << endl; // Displaying the answer

    return 0; // Returning the integer to show that the program end succesfully
}