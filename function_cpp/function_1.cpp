#include <iostream>
using namespace std;

void yourFunction(); //declaration (tells the compiler about the function)

int main()
{
    cout << "main()\n";
    yourFunction();
    return 0;
}


void yourFunction() //definition of your function
{
    cout << "yourFunction()\n";
}