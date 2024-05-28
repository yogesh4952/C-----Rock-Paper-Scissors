#include <iostream>
using namespace std;
void showBalance(double balance)
{
    cout << "Your current balance is " << balance << endl;
}

double deposit(double balance)
{
    double amount;
    cin >> amount;
    if (amount < 0)
    {
        cout << "Invalid amount";
    }
    else
    {
        balance += amount;
        // cout << "Your balance is " << balance << endl;
    }

    return balance;
}
double withdraw(double balance)
{
    double amount;
    cin >> amount;
    if (amount < 0)
    {
        cout << "Invalid amount\n";
    }
    else
    {
        balance = balance - amount;
    }
    return balance;
}

int main()
{
    int choice;
    double balance = 0.0;

    do
    {
        cout << "Enter your choice!" << endl;
        cout << "1: Show Balance" << endl;
        cout << "2: Deposit Balance" << endl;
        cout << "3: Withdraw Balance" << endl;
        cout << "4: Exiting" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            showBalance(balance);
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;

            break;

        case 2:
            cout << "Enter amount : " << endl;
            balance = deposit(balance);
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            break;

        case 3:
            cout << "Enter amount : " << endl;

            balance = withdraw(balance);
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            break;

        case 4:
            cout << "Exiting";
            exit(0);

        default:
            cout << "Invalid\n";
        }
    } while (choice != 4);
}