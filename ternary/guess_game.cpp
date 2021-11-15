#include <iostream>
using namespace std;

int main() {
    int numToGuess, numGuessed;

    cout << "Enter a number for your opponent to guess: ";
    cin >> numToGuess;
    system("clear");

    cout << "Player 1 has given you a number to guess. Start Guessing: ";
    cin >> numGuessed;

//NORMAL IF ELSE
    // if(numToGuess == numGuessed) 
    //     cout << "Perfect! You guessed it correct." << endl;
    // else
    //     cout << "Incorrect Guess." << endl;

//TERNARY
    numToGuess == numGuessed ? cout << "Perfect! You guessed it correct." << endl : cout << "Incorrect Guess." << endl;
}