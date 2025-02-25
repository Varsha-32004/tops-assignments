/*2. Type Conversion 
o Write a C++ program that performs both implicit and Explicit type conversions and 
prints the results. 
o Objective: Practice type casting in C++. */
#include<iostream>
using namespace std;
int main()
{
    //implicit type conversions
    float x=95.78;
    int y=x;
    cout<<"Implicit type conversions="<<y<<endl;

    cout<<"------------------------------------------------------";
    
    // Explicit type conversions
    char a='A';
    int b=(int)a;
    cout<<"Float a value="<<a<<endl;
    cout<<"Explicit type conversions="<<b<<endl;


    return 0;
}