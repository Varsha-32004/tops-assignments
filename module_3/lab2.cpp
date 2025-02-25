/*2. Basic Input/Output 
o Write a C++ program that accepts user input for their name and age and then 
displays a personalized greeting. 
o Objective: Practice input/output operations using cin and cout. */

#include<iostream>
using namespace std;
int main()
{
    int age;
    string name;
    cout<<"Enter your age:";
    cin>>age;
    cout<<"Enter your name:";
    cin>>name;

    cout<<"User age is:"<<age<<endl;
    cout<<"User name is:"<<name<<endl;
    return 0;
}