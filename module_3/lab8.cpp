/*1. Grade Calculator 
o Write a C++ program that takes a student’s marks as input and calculates the grade 
based on if-else conditions. 
o Objective: Practice conditional statements (if-else). */

#include <iostream>
using namespace std;
int main()
{
    int rnum,sub1,sub2,sub3;
    string name;

   

    cout<<"Enter student roll number=";
    cin>>rnum;
    

    cout<<"Enter student name=";
    cin>>name;

  
    
    cout<<"Enter student c language=";
    cin>>sub1;
    

    cout<<"Enter student c++ language=";
    cin>>sub2;
   

    cout<<"Enter student java language=";
    cin>>sub3;
    
    cout<<"-----------------Student details---------------------"<<endl;
    cout<<"Student roll number is:"<<rnum<<endl;
    cout<<"Student name is:"<<name<<endl;

      cout<<"-----------------Student marks----------------------"<<endl;
      
    cout<<"Student c language:"<<sub1<<endl;
    cout<<"Student  c++ language:"<<sub2<<endl;
    cout<<"Student java language:"<<sub3<<endl;

    

    
    int sum=sub1+sub2+sub3;
    cout<<"Sum of all subject="<<sum<<endl;

    float per;
    per = (float)sum / (float)3;
    cout << "Student percantage is:" << per<<endl;

    cout<<"-------------------Grade----------------------"<<endl;

    if (per >= 1 && per <= 45)
    {
        cout << "Grade: C"<<endl;
    }
    else if (per >= 46 && per <= 80)
    {
        cout << "Grade: B"<<endl;
    }
    else
    {
        cout << "Grade: A"<<endl;
    }

    return 0;
}