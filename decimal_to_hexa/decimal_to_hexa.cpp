//A program to convert decimal to hexadecimal

#include <iostream>

using namespace std;

int main()
{
    int number;
    char choice;

    while (choice != 'n')
    {
        cout << "Enter a decimal number to convert to hexadecimal: ";
        cin >> number;
        if (!cin) { 
            cout << "Enter a valid number!!!!!!" << endl;
            return 1;
        }
        cout << "Hexadecimal of " << number << ": " << hex << number << endl;
        cout << "Convert again? 'y' or 'n': ";
    
        cin >> choice;
        cout << "------------------------------" << endl;
    }
    return 0;
}
