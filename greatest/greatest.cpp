#include <iostream>

using std::cout; 
using std::cin; 
using std::endl;

int main() { 
    int num1;
    int num2;

    cout << "First integer number: ";
    cin >> num1;

    cout << "Second integer number: ";
    cin >> num2;

    if (num1 > num2) {
        cout << num1 << " is greater than " << num2 << ".\n";
        return 0;
    }
    else {
        cout << num2 << " is greater than " << num1 << ".\n";
        return 0;
    }
}