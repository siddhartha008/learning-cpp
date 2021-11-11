//User enters an integer number
//Our program will tell if the number is even or odd. 

#include <iostream> 

using namespace std;

int main() { 
    int number; 
    cout << "Enter a number: "; 
    cin >> number; 
    if (number % 2 == 0) { 
        cout << "The number " << number << " is even." << endl; 
        return 0;
    } else {
        cout << "The number " << number << " is odd." << endl; 
        return 0;
    }
    cout << "Thank you."
    return 0;
}