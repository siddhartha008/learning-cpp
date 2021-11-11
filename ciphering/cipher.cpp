//words into cipher (a beginner friendly cpp program)

#include <iostream>

using namespace std;

int main()
{
    char c1, c2, c3, c4, c5;
    cout << "Enter 5 letters: ";
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    cout << "ASCII MESSAGE: " << int(c1) << " " << int(c2) << " " << int(c3) << " " << int(c4) << " " << int(c5) << endl;
    cout << "NORMAL MESSAGE: " << c1 << " " << c2 << " " << c3 << " " << c4 << " " << c5 << endl; 
    return 0; 
}