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
    int number;
    cout << "Display prime numbers till: ";
    cin >> number;

    for (int i = 2; i <= number; i++)
    {
        bool isPrime = isPrimeNumber(i);
        if (isPrime)
        {
            cout << i << endl;
        }
    }
    return 0;
}
