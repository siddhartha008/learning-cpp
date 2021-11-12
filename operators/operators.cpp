#include <iostream>

//NOTE:: 0 = FALSE, 1 = TRUE for logical operators

using namespace std;

int main()
{
    //arithmetic operator:: +,-,/,*,%, where '%' = MOD(you get remainder from a division)

    int a = 5, b = 2;
    cout << "a=5, b=2" << endl;
    //add
    cout << "a+b: " << a + b << endl;

    //subtract
    cout << "a-b: " <<  a - b << endl;

    //multiply
    cout << "a*b: " << a * b << endl;

    //divide
    cout << "a/b (without remainder): " << a / b << endl;
    //NOTE: when you divide two whole number, the program outputs a whole number. You have to cast 
    //one of the numbers while dividing or cast the output as a float
    cout << "a/b (with remainder): " << float(a) / b << endl;
    
    //relational operators:: <, >, <=, >=, ==, != 
    cout << (a==b) << endl; //Output is 0(false) because a=5 and b=2
    cout << (a!=b) << endl; //Output is 1(true) because they're not equal

    //logical operator:: &&, ||, ! (AND, OR, NOT)
    //mostly used in (if-else) to check multiple conditions

    //The priority is ARITHMENTIC > RELATIONAL > LOGICAL operators

    return 0;
}