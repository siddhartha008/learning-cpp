#include <iostream>
using namespace std;
//A void pointer can hold the address of a variable of any data type.
//Void ptr can hold the address of float, char, int whichever u pass it to the ptr.

//this printNumber function takes the address of number as a parameter and we derefenced it and printed it.
void printVariable(void *variablePtr, char type)
{
    if (type == 'c')
    {
        char *numberPtr = (char *)variablePtr;
        cout << *numberPtr << endl;
    }
    else if (type == 'i')
    {
        int *charPtr = (int *)variablePtr;
        cout << *charPtr << endl;
    }
    else if (type == 'f')
    {
        float *floatPtr = (float *)variablePtr;
        cout << *floatPtr << endl;
    }
    else if (type == 'b')
    {
        bool *boolPtr = (bool *)variablePtr;
        cout << *boolPtr << endl;
    }
    else
    {
        cout << "Invalid type\n.";
    }
}

int main()
{
    int number = 5;
    char letter = 'a';
    float deci = 4.55;
    printVariable(&number, 'i'); //passing the address of the variable 'number'
    printVariable(&letter, 'c');
    printVariable(&deci, 'f');
    return 0;
}