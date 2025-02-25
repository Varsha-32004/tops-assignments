/*3. Inheritance Example 
o Write a program that implements inheritance using a base class Person and derived 
classes Student and Teacher. Demonstrate reusability through inheritance. 
o Objective: Learn the concept of inheritance.*/
#include <iostream>
using namespace std;
class Person
{
private:
    string name, course;
    int age;

public:
    void Set(string n, int a, string c)
    {
        name = n;
        age = a;
        course = c;
    }
    void Infomation()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Course Name : " << course << endl;
    }
};
class Student : public Person
{
private:
    double studid;

public:
    void setstudid(double id)
    {
        studid = id;
    }
    void studeinfo()
    {
        cout << "Student id : " << studid << endl;
    }
};
class Teacher : public Person
{
private:
    double empid;

public:
    void setempid(double id)
    {
        empid = id;
    }
    void empinfo()
    {
        cout << "Employee id : " << empid << endl;
    }
};
int main()
{
    Student s1;
    s1.setstudid(333333);
    s1.Set("parmar varsha", 21, "C++");
    Teacher t1;
    t1.setempid(444444);
    t1.Set("parmar bhavisha", 25, "java");

    cout << "----------------Display The Student Information---------------" << endl;
    s1.studeinfo();
    s1.Infomation();

    cout << "----------------Display The Employess Infomation---------------" << endl;
    t1.empinfo();
    t1.Infomation();
    return 0;
}