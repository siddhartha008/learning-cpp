#include <iostream>
using namespace std;

int main()
{
    //Reversing digits in CPP

    int number, reversedNumber = 0;
    cout << "Enter a number to reverse: ";
    cin >> number;
    while (number != 0)
    {
        reversedNumber *= 10; 
        reversedNumber += number % 10;
        number /= 10;
    }
    cout << reversedNumber << endl;

}
