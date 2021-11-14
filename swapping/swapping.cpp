#include <iostream>
using namespace std;

int main()
{
    //A CPP program for swapping two numbers
    int a = 20;
    int b = 10;
    int c;

    cout << "a(before swapping): " << a << endl;
    cout << "b(before swapping): " << b << endl;

    //Make a temporary variable and swap them
    c = a;
    a = b;
    b = c;

    cout << "" << endl;
    cout << "a(after swapping): " << a << endl;
    cout << "b(after swapping): " << b << endl;

    return 0;
}
