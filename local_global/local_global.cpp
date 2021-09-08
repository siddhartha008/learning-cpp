//Local and global variables

#include <iostream>

using namespace std; 

//Global Variables - variables you can access from anywhere in the program
//Local Varibales - variables you can access from the block of codes only

// ----------------------------------------------------------------------
//Global Variable initialized
int gVar; 
int gVar2 = 2; 

int main() { 
    char ch('A'); //Local variable character being inialitzed or: char ch = 'A'; 
    
    cout << "Value of gVar = " << gVar << endl;
    cout << "Value of gVar2 = " << gVar2 << endl;
    cout << "Value of ch = " << ch << endl;

    //Local Variable: here sum gets 0 but numbers gets 3. 
    int sum, number = 3;
    
    cout << "Value of sum without addition: "  << sum << endl;

    sum = number + 5;
    cout << "Value of sum now: "  << sum << endl;

    return 0;
}
