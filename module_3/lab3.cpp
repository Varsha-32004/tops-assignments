/*3. POP vs. OOP Comparison Program 
o Write two small programs: one using Procedural Programming (POP) to calculate the 
area of a rectangle, and another using Object-Oriented Programming (OOP) with a 
class and object for the same task. 
o Objective: Highlight the difference between POP and OOP approaches.*/



#include<iostream>
using namespace std;
//pop
int rectangle(int l,int b)
{
    return l*b;
}
//oop
class Rectanglearea
{
    public:
    int l;
    int b;
    int area()
    {
        return l*b;
    }
};
int main()
{
    //pop
    int l=20;
    int b=10;
    cout<<"area of a rectangle is= "<<rectangle(l,b)<<endl;

    //oop

    Rectanglearea r;
    r.l=40;
    r.b=20;
    cout<<"area of a rectangle is="<<r.area()<<endl;   
    return 0;
}