#include <iostream>
using namespace std;

//count digits of number

int main()
{
    int displayNumber, number, length = 0;
    cout << "Enter a numebr to count its digit: ";
    cin >> number;

    displayNumber = number; 

    if (number == 0)
    {
        cout << "You have entered 0.\n";
    }
    else
    {
        //if a number is positive, we multiply it by -1 to make it positive. 
        if (number < 0) {
            number *= -1;
        }

        while (number > 0)
        {
            number = number / 10;  //1234/10 = 123.4 (but 0.4 will get deleted and length will increase)
            length++;
            if (length > 9) { 
                cout << "OVERFLOW. You entered a very big number for int to support the calculation.\n";
                return 1;  
            }
        } 
    }
    cout << "Number(" << displayNumber << ") contains " << length << " digits." << endl;
    return 0;
}
