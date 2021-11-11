#include <iostream> 

using namespace std; 

int main() 
{ 
    
    string name; 
    //for string we use getline so we can enter a text for a line
    cout << " Enter your name: "; 
    getline(cin, name);

    cout << "Hello, " << name << "." << endl;

    return 0; 
}