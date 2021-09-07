#include <iostream> 
using namespace std; 

double d1 = 4.2;

//prototype to define a function 
void print_result(double number);
double square(double x);

//main function that gets executed first and calls 'print_result' function
int main() 
{
    print_result(d1);
}

//squares the number 'x' and returns it to the 'print_result' function
double square(double x)
{
    return x * x ; 
}

//prints the result by calling 'square' function
void print_result(double number)
{ 
    cout << "The square of the number " <<number<< " is " << square(number) << "\n";
}

