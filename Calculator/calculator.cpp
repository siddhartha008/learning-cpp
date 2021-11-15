#include <iostream>
using namespace std;

int main()
{
    float num1, num2, result;
    char operation;

    cout << "**CALCULATOR USING SWITCH CASE**" << endl;

    cout << "Enter an operation: (+, -, *, /, %): ";
    cin >> operation;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    switch (operation)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    case '%':
        bool isNum1Integer, isNum2Integer;
        (int)num1 == num1 && (int)num2 == num2 ? isNum1Integer = true, isNum2Integer = true : isNum1Integer = false, isNum2Integer = false;
        if (isNum1Integer && isNum2Integer) 
            result = (int)num1 % (int)num2; 
        else { 
            cout << "Cannot perform % in decimal numbers. Please enter 2 integer numbers.";
        }
        break;
    default:
        cout << "INVALID OPERATION!!!" << endl;
        return 1;
    }
    cout << num1 << " " << operation << " " << num2 << " = " << result << endl;
    return 0;
}