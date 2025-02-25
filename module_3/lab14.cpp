/*3. Variable Scope 
o Write a program that demonstrates the difference between local and global 
variables in C++. Use functions to show scope. 
o Objective: Reinforce the concept of variable scope. */
#include <iostream>
using namespace std;
int globalvariable=10;

void variable()
{
    int num2;
    cout << "Enter the number two : ";
    cin >> num2;
    cout << "The local variable value is : " << num2 << endl;
    cout<<"The global variable value is :"<<globalvariable<<endl;
}

int main()
{
    variable();
    return 0;
}