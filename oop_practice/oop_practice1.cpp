// Write a program by creating an 'Employee' class having the following functions and print the final salary.
// 1 - 'getInfo()' which takes the salary, number of hours of work per day of employee as parameters
// 2 - 'AddSal()' which adds $10 to the salary of the employee if it is less than $500.
// 3 - 'AddWork()' which adds $5 to the salary of the employee if the number of hours of work per day is more than 6 hours.

#include <iostream>
using namespace std;

class Employee
{
private:
    string Name;
    int Salary;
    int HoursOfWork;

public:
    Employee(string name)
    {
        Name = name;
    }

    void getInfo()
    {
        cout << "Enter your salary: ";
        cin >> Salary;

        cout << "Enter your working hours: ";
        cin >> HoursOfWork;
    }

    void AddSal()
    {
        if (Salary < 500)
        {
            Salary += 10;
        }
    }

    void AddWork()
    {
        if (HoursOfWork > 6)
        {
            Salary += 5;
        }
        cout << Name << "'s salary is: " << Salary << endl;
    }
};

int main()
{
    Employee john = Employee("John");
    john.getInfo();
    john.AddSal();
    john.AddWork();
}