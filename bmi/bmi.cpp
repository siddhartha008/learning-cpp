#include <iostream>
using namespace std;

//A program to calculate BMI 

int main(){
    float weight;
    float height; 
    float bmi; 

    cout << "Weight(kg): ";
    cin >> weight;
    cout << "Height(m): ";
    cin >> height; 

    // cout << "Weight: " << weight << ", Height: " << height << endl;

    bmi = weight / (height * height);
    if (bmi < 18.5) { 
        cout << "Underweight." << endl;
    } else if (bmi > 25) { 
        cout << "Overweight." << endl;
    } else { 
        cout << "Normal Weight." << endl;
    }
    cout << "Your BMI is: " << bmi << endl;
    return 0;
}