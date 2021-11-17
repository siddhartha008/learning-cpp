#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int height;
    cout << "Enter a height for your triangle: ";
    cin >> height;

    char symbol;
    cout << "Enter a symbol for your tirangle: ";
    cin >> symbol;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << setw(2) << symbol;
        }
        cout << endl;
    }
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << setw(2) << symbol;
        }
        cout << endl;
    }
    return 0;
}