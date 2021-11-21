#include <iostream>
using namespace std;

int main()
{
    int number, hour = 0;
    cout << "Enter a number to convert it into HOUR:MINUTE format: ";
    cin >> number;
    do
    {
        if (number > 60)
        {
            hour++;
            number -= 60;
        }
    } while (number >= 60);
    cout << hour << ":" << number << endl;

    return 0;
}
