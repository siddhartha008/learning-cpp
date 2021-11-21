#include <iostream>
using namespace std;


//and the argument passed when called is parameters
void introduceMe(string name, string city, int age)
{
    cout << "Hello " << name << endl;
    cout << "You are from " << city << ". It is a beautiful city.\n";
    if (age != 0)
    {
        cout << "You are " << age << " years old." << endl;
    }
}

int main()
{
    int age;
    string name, city;
    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your city: ";
    cin >> city;

    introduceMe(name, city, age); //we are passing argument
    return 0;
}

