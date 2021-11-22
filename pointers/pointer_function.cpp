#include <iostream>
using namespace std;

// int getMinNumber(int number[], int size)
// {
//     int smallest = number[0];
//     for (int i = 1; i < size; i++)
//     {
//         if (number[i] < smallest)
//         {
//             smallest = number[i];
//         }
//     }
//     return smallest;
// }

// int getMaxNumber(int number[], int size)
// {
//     int largest = number[0];
//     for (int i = 1; i < size; i++)
//     {
//         if (number[i] > largest)
//         {
//             largest = number[i];
//         }
//     }
//     return largest;
// }

void getMinAndMax(int number[], int size, int *min, int *max)
{
    for (int i = 0; i < size; i++)
    {
        if (number[i] > *max)
        {
            *max = number[i];
        }
        if (number[i] < *min)
        {
            *min = number[i];
        }
    }
}
int main()
{
    int numbers[5] = {5, 4, -2, 29, 6};
    int smallestNumber = numbers[0];
    int largestNumber = numbers[0];
    getMinAndMax(numbers, 5, &smallestNumber, &largestNumber);
    cout << smallestNumber << endl;
    cout << largestNumber << endl;

    return 0;
}