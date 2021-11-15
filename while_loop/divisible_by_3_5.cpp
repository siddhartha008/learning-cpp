#include <iostream>
using namespace std;
//A program to print numbers from 100-500 that are divisible from 3 and 5  

int main() {
    int num = 100; 

    while(num <= 500) { 
        if (num % 3 == 0 && num % 5 == 0)
            cout << num << " is divisible by 3 and 5." << endl;
        num++;
    }
    return 0;
}