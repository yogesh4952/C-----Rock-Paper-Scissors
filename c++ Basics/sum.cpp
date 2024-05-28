#include <iostream>
int main()
{
    int number1, number2, sum;
    std::cout << "Enter a Number\n";
    std::cin >> number1;

    std::cout << "Enter the second Number:\n";
    std::cin >> number2;

    sum = number1 + number2;

    std::cout << sum;
    std::cout << "\nThe Sum is: " << sum << std::endl;
}