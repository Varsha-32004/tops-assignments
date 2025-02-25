/*1. Class for a Simple Calculator 
o Write a C++ program that defines a class Calculator with functions for addition, 
subtraction, multiplication, and division. Create objects to use these functions. 
o Objective: Introduce basic class structure. */
#include <iostream>
using namespace std;
class Calculator
{
    public:
    int addition(int num1, int num2)
    {
        return num1 + num2;
    }
    int subtraction(int num1, int num2)
    {
        return num1 - num2;
    }
    int multiplication(int num1, int num2)
    {
        return num1 * num2;
    }
    int division(int num1, int num2)
    {
        if (num1 != 0)
        {
            return (float)num1 / (float)num2;
        }
        else
        {
            cout << "Division By Zero Is Not Allowed";
            return 0;
        }
    }
};
int main()
{
    Calculator c;
    int num1, num2;
    cout << "Enter The Numerical Number Of N1 : ";
    cin >> num1;
    cout << "Enter The Numerical Number Of N2 : ";
    cin >> num2;

    cout << "The addition is: " << c.addition(num1,num2) << endl;
    cout << "The subtraction is: " << c.subtraction(num1,num2) << endl;
    cout << "The multiplication is " << c.multiplication(num1,num2) << endl;
    cout << "The division is " <<c.division(num1,num2)<< endl;
    return 0;
}