#include <iostream>
using namespace std;

int main()
{
    //factorial of a number
    int number, factorial = 1;
    cout << "Number: ";
    cin >> number;

    for (int i = 1; i <= number; i++)
    {
        factorial *= i;
    }
    cout << factorial << endl;
    
    return 0;
}