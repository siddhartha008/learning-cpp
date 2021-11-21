#include <iostream>
using namespace std;

bool isPrimeNumber(int unumber)
{
    bool isPrimeFlag = true;
    for (int i = 2; i < unumber; i++)
    {
        if (unumber % i == 0)
        {
            isPrimeFlag = false;
            break;
        }
    }
    return isPrimeFlag;
}

int main()
{
    int unumber;
    cout << "Enter a number: ";
    cin >> unumber;

    bool isPrime = isPrimeNumber(unumber);
    if (isPrime)
    {
        cout << unumber << " is a prime number.\n";
    }
    else
    {
        cout << unumber << " is not a prime number.\n";
    }
}
