/*3. String Palindrome Check 
o Write a C++ program to check if a given string is a palindrome (reads the same 
forwards and backwards). 
o Objective: Practice string operations.*/
#include <iostream>
using namespace std;
int main()
{
    string s1, temp;
    cout << "Enter the string name: ";
    getline(cin, s1);
    temp = s1;
    int i, len = 0, j = 0;
    char str1[100];
    for (i = 0; s1[i] != '\0'; i++)
    {
        len++;
    }
    for (i = len - 1; i >= 0; i--)
    {
        str1[j] = s1[i];
        j++;
    }

    if (temp == str1)
    {
        cout << "The String Is Pellindrom..!";
    }
    else
    {
        cout << "The String Is Not Pellindrom..!";
    }

    return 0;
}