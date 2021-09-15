#include <iostream> 

using std::cout; 
using std::cin; 
using std::endl; 

int main() { 
    float length; 
    float width; 
    int area;

    cout << "Enter the length of rectangle: "; 
    cin >> length;
    
    cout << "Enter the breadth of rectangle: "; 
    cin >> width; 
    
    
    area = int(length * width);
    cout << "The area of rectangle is: " << area << endl;

    if (area % 2 == 0) {
        cout << "Area is a square number.\n";
        return 0;
    } else {
        cout << "Not a square number.\n";
        return 0;
    }

}