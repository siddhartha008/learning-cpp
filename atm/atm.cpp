#include <iostream>
#include <iomanip>
using namespace std;
//check balance, deposit, withdraw, show menu.

void showMenu()
{
    cout << setw(4) << "* * * * * * M E N U * * * * * *\n";
    cout << setw(4) << "1. Check Balance.\n";
    cout << setw(4) << "2. Deposit Money.\n";
    cout << setw(4) << "3. Withdraw Balance.\n";
    cout << setw(4) << "4. Exit.\n";
    cout << "* * * * * * * * * * * * * * * *\n";
}

int main()
{
    int choice;
    double balance = 500;
    do
    {

        showMenu();
        cout << "Choose an operation: ";
        cin >> choice;
        system("clear");
        switch (choice)
        {
        case 1:
            cout << "Your balance is: $" << balance << endl;
            break;

        case 2:
            double deposit;
            cout << "Deposit amount: ";
            cin >> deposit;
            balance += deposit;
            break;

        case 3:
            double withdrawMoney;
            cout << "Withdraw amount: ";
            cin >> withdrawMoney;
            if (withdrawMoney <= balance)
            {
                balance -= withdrawMoney;
            }
            else
            {
                cout << "You dont have enough money to withdraw the requested amount.\n";
            }
            break;

        default:
            cout << "Enter a valid operation!!\n";
            break;
        }
    } while (choice != 4);

    return 0;
}