#include <iostream>
using namespace std;
 
int main()
{
 
    int x = 10, a;
     cout << "x(no-increment) = " << x << endl;
 
    x = x++;
    // Value of x will not change in post-increment because the value will be assigned first
    cout << "x(post-increment)= " << x << endl;
    
    x = ++x;
    // Value of x will not change in pre-increment because the value will be added first and then assigned
    cout << "x(pre-increment)= " << x << endl;

    return 0; 
}