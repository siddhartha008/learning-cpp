#include <iostream>

using namespace std;

int add(int x, int y), sub(int x, int y), product(int x, int y);
float divide(int x, int y);

int main()
{
    int num1, num2, result;
    char symbol;
    char choice;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter another number: ";
    cin >> num2;

    cout << "Whatchu wanna do?" << endl;
    cout << "A: Add" << endl;
    cout << "S: Subtract" << endl;;
    cout << "P: Product" << endl;;
    cout << "D: Divide" << endl;;

    cin >> choice;

    if (choice == 'A')
    {
        result = add(num1, num2);
        symbol = '+';
    }
    else if (choice == 'S')
    {
        result = sub(num1, num2);
        symbol = '-';
    }
    else if (choice == 'P')
    {
        result = product(num1, num2);
        symbol = '*';
    }
    else if (choice == 'D')
    {
        result = divide(num1, num2);
        symbol = '/';
    }
    else
    {
        cout << "Choose a valid option." << endl;
        result = 0;
        // return 1 because we wanna quit the program if error choice
        return 1;
    }

    cout << num1 << symbol << num2 << " is " << result << endl;

    return 0;
}

//a function to add 2 numbers
int add(int x, int y)
{
    return x + y;
}

//a function to subtract 2 numbers 
int sub(int x, int y)
{
    return x- y ;
}

//a function to multiply 2 numbers
int product(int x, int y)
{
    return x * y;
}

//a function to divide 2 numbers
float divide(int x, int y)
{
    return x / y;
}