#include <iostream>
typedef class gradebook
{
public:
    void displayMessgae()
    {
        std::cout << "Welcome to the grade Book!" << std::endl;
    }

} gradebook;
int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    gradebook mygradebook;
    mygradebook.displayMessgae();
}