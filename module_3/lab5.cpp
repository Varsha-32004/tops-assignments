/*1. Variables and Constants 
o Write a C++ program that demonstrates the use of variables and constants. Create 
variables of different data types and perform operations on them. 
o Objective: Understand the difference between variables and constants.*/

#include<iostream>
using namespace std;
#define num5 20;
int main()
{
    const int num1=10;// constants value
    int num2;
    cout<<"Enter the number=";
    cin>>num2;

    cout<<"-----------------------------------------------"<<endl;
    cout<<"Additional of two number is="<<num1+num2<<endl;
    cout<<"Substraction of two numbr is="<<num1-num2<<endl;
    cout<<"Multiplication of two numbr is="<<num1*num2<<endl;
    cout<<"Division of two numbr is="<<(float)num1/(float)num2<<endl;
    cout<<"Reminder of two numbr is="<<num1%num2<<endl;
    cout<<"-----------------------------------------------"<<endl;

    float num3=2.5;
    cout<<"Float value="<<num3<<endl;
    double num4=4.5555678;
    cout<<"Double value="<<num4<<endl;
    cout<<"-----------------------------------------------"<<endl;

    bool a=true;
    cout<<" Positive boolean value ="<<a<<endl;
    bool b=false;
    cout<<"Nagative boolean value ="<<b<<endl;
    cout<<"-----------------------------------------------"<<endl;


    string s1="My name is varsha";
    cout<<"String value="<<s1<<endl;
    cout<<"-----------------------------------------------"<<endl;

    char c='A';
    cout<<"Character value="<<c<<endl;
    cout<<"-----------------------------------------------"<<endl;

    cout<<"Constant valu using definf="<<num5;
    return 0;
}