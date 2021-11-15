#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    //year % 4 == 0 && year % 100 != 0
    // or year % 400 == 0 for a leap year
    int year, month;

    cout << "Year, Month: ";
    cin >> year >> month;

    switch (month)
    {
    case 2:
        (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? cout << "29 days in Febuary, " << year << endl : cout << "28 days in Febuary, " << year << endl;
        break;

    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "31 days month." << endl; break;

    case 4:
    case 6:
    case 9:
    case 11:
        cout << "30 days month." << endl; break;

    default:
        cout << "Enter a valid month!!" << endl;
    }
}