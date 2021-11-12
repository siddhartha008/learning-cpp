#include <iostream>

using namespace std;

int main()
{
    int a = 5, b = 4;
    cout << a + (b++) << endl; // the sum will be 9 but a=5, b=5
    cout << (--a) + b << endl; //a=4 but b=5. and the sum will again be 9

    cout << !(true && false) << endl;        //true (1)
    cout << (true && false || true) << endl; //true (1)

    int x = 7;
    cout << (++x <= 9 && x + 2 >= 10) << endl; //true(1) because x becomes 8 in first expression and 8+2=10 for second

    int y = 3;
    cout << (y == y++) << endl; //true because post increment doesn't hamper y here.

    float z = 8;
    z += 2;
    cout << z << endl; //10
    z /= 2;
    cout << z << endl; //5
    return 0;
}