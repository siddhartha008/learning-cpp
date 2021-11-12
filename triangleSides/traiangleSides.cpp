#include <iostream>
using namespace std;

int main() { 

    float num1,num2,num3;
    cout << "Enter the three sides of a triangle." << endl;
    cout << "First side: "; 
    cin >> num1;
    cout << "Second side: "; 
    cin >> num2;
    cout << "Third side: "; 
    cin >> num3;

    if (num1 == num2 && num1 == num3) 
        cout << "The triangle is a equilateral triangle." << endl;
    else if (num1 != num2 && num1 != num3 && num2 != num3)  
        cout << "The triangle is a scalene triangle." << endl;
    else 
        cout << "The triangle is a isosceles triangle." << endl;
    
    return 0;
}