#include <iostream>
using namespace std;

int main()
{
    //an array of 5 lucky numbers
    int luckyNumber[5] = {2, 3, 5, 7, 9};
    // cout << luckyNumber << endl;
    // cout << &luckyNumber[0] << endl;
    // cout << luckyNumber[2] << endl;
    // cout << *(luckyNumber +2) << endl;

    for (int i = 0; i <= 4; i++)
    {
        cout << "Number: ";
        cin >> luckyNumber[i];
    }
    for (int i = 0; i <= 4; i++)
    {
        cout << *(luckyNumber + i) << "  ";
    }
    cout << endl;
    return 0;
}