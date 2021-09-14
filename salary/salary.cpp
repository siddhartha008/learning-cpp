#include <iostream>

using namespace std;

int main() { 
    char choice; 
    float annualSalary; 
    float monthlySalary;

    cout << "Enter 'A' for annual salary or 'M' for monthly salary: "; 
    cin >> choice; 

    if (choice == 'A') {
        cout << "Enter your annual salary (in Rs.): ";
        cin >> annualSalary; 
        cout << "Your monthly salary is Rs." << annualSalary / 12 << "." << endl;
        return 0; 
    } else if (choice == 'M') { 
        cout << "Enter your monthly salary (in Rs.): "; 
        cin >> monthlySalary;
        cout << "Your annual salary is Rs." << monthlySalary * 12 << "." << endl;
        return 0;
    } else {
        cout << "Enter a valid choice!!";
        return 1;
    }
}