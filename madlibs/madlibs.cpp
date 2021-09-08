#include <iostream>

using namespace std; 

int main() { 
    string color, noun, celeb;
    cout << "Enter a color: "; 
    getline(cin, color);

    cout << "Enter a plural noun: "; 
    getline(cin, noun);

    cout << "Enter a celebrity name: "; 
    getline(cin, celeb);
    cout << "------------------------------------" << endl; 
    cout << "Roses are " << color << endl; 
    cout << noun << " are blue" << endl;
    cout << "I love " << celeb << endl;

    return 0;
}