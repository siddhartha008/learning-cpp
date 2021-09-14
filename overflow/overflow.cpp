#include <iostream>

using namespace std; 

int main() {
    int intMax = INT_MAX; 
    cout << "INTMAX IS: " << intMax << endl;

    //This wont add 1 to intmax. This will cause overflow and the result will be the minimum value of int. 
    // it works like clock. ...10AM, 11AM, 12PM and after it hits 12, it goes to min which is 1PM. 
    //similarly, overflow hits the min.  
    cout <<  "(Overflow) INTMAX + 1: " << intMax + 1 << endl;
    return 0; 
}