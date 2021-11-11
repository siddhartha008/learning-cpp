//a program to print the ascii value of characters and vice versa

#include <iostream>
using namespace std;

int main(){ 
    cout << int('a') << endl; //gives the numeric value of 'a' in ASCII
    cout << (int) 'b' << endl; //gives the numeric value of 'b' in ASCII
    cout << int ('A') << endl; //gives the numeric value of 'A' in ASCII

    cout << char(65) << endl; //this is the vice versa of the same operation 
}