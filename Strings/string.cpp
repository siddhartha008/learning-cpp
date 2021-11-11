#include <iostream> 

using namespace std; 

int main () { 
    // a variable called name to store a string data type
    string name = "Siddhartha Mishra";

    //length of the screen 
    cout << name.length() << endl;

    //indexing a string to print out a character in that index (starts with 0)
    cout << name[0] << endl; 

    //manipulating screen
    name[0] = 'K';
    cout << name << endl;

    //find function to find a string/character inside a string
    cout << name.find("Mis") << endl;

    //substring function (substr) 
    string nameSub = name.substr(4,3);
    cout << nameSub << endl;

    return 0; 
}