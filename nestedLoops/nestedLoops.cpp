#include <iostream>
using namespace std;

int main()
{
    int grade, length, sum = 0;

    cout << "How many grades do you want to enter? ";
    cin >> length;

    for (int i = 0; i < length; i++)
    {
        do
        {
            cout << "Enter grade(" << (i + 1) << "): ";
            cin >> grade;
        } while (grade < 1 || grade > 5);
        sum += grade;
    }

    cout << "Sum of the accepted grades: " << sum << endl;

    return 0;
}