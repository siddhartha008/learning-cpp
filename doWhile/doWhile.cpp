#include <iostream>
using namespace std;

int main()
{
    int guess = 0, userPin = 1234, enteredPin;

    do
    {
        cout << "Enter your pin to unlock the device: ";

        cin >> enteredPin;
        if (enteredPin != userPin)
        {

            cout << "WRONG PIN.\n";
            guess++;
        }
        else
        {
            cout << "Loading......\n";
            return 0;
        }

    } while (guess < 3 && enteredPin != userPin);

    if (guess == 3)
    {
        cout << "More than 3 attempts. Your phone is blocked.\n";
        return 1;
    }
    return 0;
}