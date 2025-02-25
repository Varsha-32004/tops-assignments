/*1. Simple Calculator Using Functions 
o Write a C++ program that defines functions for basic arithmetic operations (add, 
subtract, multiply, divide). The main function should call these based on user input. 
o Objective: Practice defining and using functions in C++. */
#include <iostream>
using namespace std;
void add(int num1, int num2)
{
    cout << " Addition of two number is: " << num1 + num2 << endl;
}
void subtract(int num1, int num2)
{
    cout << "Substraction of two number is: " << num1 - num2 << endl;
}
void multiply(int num1, int num2)
{
    cout << " Multiplication of two number is: " << num1 * num2 << endl;
}
void divide(int num1, int num2)
{
    cout << "Division of two number is: " << num1 / num2 << endl;
}
int main()
{
    int num1, num2;
    char operaters;
    cout << "Enter number one: ";
    cin >> num1;
    cout<<"Enter number two:";
    cin>>num2;
    cout << "Enter operation (+, -, *, /): ";
    cin >> operaters;
    switch (operaters)
    {
    case '+':
        add(num1, num2);
        break;
    case '-':
        subtract(num1, num2);
        break;
    case '*':
        multiply(num1, num2);
        break;
    case '/':
        divide(num1, num2);
        break;
    default:
        cout << "Invalid operation" << endl;
    }

   return 0;
}