/*2. Number Guessing Game 
o Write a C++ program that asks the user to guess a number between 1 and 100. The 
program should provide hints if the guess is too high or too low. Use loops to allow 
the user multiple attempts. 
o Objective: Understand while loops and conditional logic. */

#include <iostream>
using namespace std;
int main()
{
    int guessnumber;
    int number = 50;
    

    
        while (true)
        {
            cout << endl << "Enter Your Guess Number: ";
            cin >> guessnumber;
    
            if (guessnumber == number)
            {
                cout << "Congratulations.! your gassing correct number";
                break;
            }
            else if (number <= guessnumber)
            {
                cout << "Your guessnumber is so High , try again";
            }
            else
            {
                cout << "Your guessnumber is so Low , try again";
            }
        }
    
        return 0;
    }