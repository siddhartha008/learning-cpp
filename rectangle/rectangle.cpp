#include <iostream>
#include <iomanip> //setw to set width

using namespace std;

int main()
{
    int height, width;
    char symbol;

    cout << "Height: ";
    cin >> height;

    cout << "Weight: ";
    cin >> width;

    cout << "Enter a symbol-> ";
    cin >> symbol;

    cout << endl;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            
            cout << setw(3) << symbol;
            
        }
        cout << endl;
    }
    cout << endl;
}