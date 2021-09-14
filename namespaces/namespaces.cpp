#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main() { 
    string name;
    cout << "This is a program without using namespaces std" << endl;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Hello, " << name << "!" << endl; 
    return 0; 
}