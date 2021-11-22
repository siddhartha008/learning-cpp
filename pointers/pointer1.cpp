#include <iostream>
using namespace std;

//A pointer is a container that stores memory address of a variable
int main()
{
    int n = 5; //a normal variable
    cout << n << endl;
    cout << &n << endl; // address of n variable, represented by ampersand '&'

    //To create a pointer
    int *ptr = &n;       //data type of the pointer and * to represent it's a pointer and assign it a mem address
    cout << ptr << endl; // this displays the address too

    //to display what is inside the ptr, we need to dereference it and access by * again.
    // outputs 5, as ptr has a mem address of 'n' variable and by dereferencing it, we access what's inside.
    cout << *ptr << endl;

    //to change the value of a variable using pointer:
    *ptr = 10;
    cout << *ptr << endl;
    //'n' also changes as we are playing with it's memory
    cout << n << endl;

    return 0;
}