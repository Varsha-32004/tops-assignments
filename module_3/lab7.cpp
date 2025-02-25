/*3. Operator Demonstration 
o Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise 
operators. Perform operations using each type of operator and display the results. 
o Objective: Reinforce understanding of different types of operators in C++. */

#include<iostream>
using namespace std;
int main()
{
    int num1,num2;

    cout<<"Enter the num1 value=";
    cin>>num1;
    cout<<"Enter the num2 value=";
    cin>>num2;

    cout<<"------------------arithmetic operator--------------------"<<endl;
    cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
    cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl;
    cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl;
    cout<<num1<<"/"<<num2<<"="<<(float)num1/(float)num2<<endl;
    cout<<num1<<"%"<<num2<<"="<<num1%num2<<endl;

    cout<<"----------------relational operator------------------------"<<endl;

    cout<<num1<<"=="<<num2<<"="<<(num1==num2)<<endl;
    cout<<num1<<"!="<<num2<<"="<<(num1!=num2)<<endl;
    cout<<num1<<"<"<<num2<<"="<<(num1<num2)<<endl;
    cout<<num1<<">"<<num2<<"="<<(num1>num2)<<endl;
    cout<<num1<<"<="<<num2<<"="<<(num1<=num2)<<endl;
    cout<<num1<<">="<<num2<<"="<<(num1>=num2)<<endl;

    cout<<"----------------logical operator------------------------"<<endl;

    cout<<num1<<"&&"<<num2<<"="<<(num1&&num2)<<endl;
    cout<<num1<<"||"<<num2<<"="<<(num1||num2)<<endl;
    cout<<"!"<<num1<<"="<<(!num1)<<endl;

    cout<<"----------------bitwise  operator------------------------"<<endl;

    cout<<num1<<"&"<<num2<<"="<<(num1&num2)<<endl;
    cout<<num1<<"|"<<num2<<"="<<(num1|num2)<<endl;
    cout<<num1<<"<<"<<num2<<"="<<(num1<<num2)<<endl;
    cout<<num1<<">>"<<num2<<"="<<(num1>>num2)<<endl;
    
    cout<<num1<<">"<<num2<<"="<<(num1>num2)?cout<<"true" :cout<<"false";
    return 0;
}
