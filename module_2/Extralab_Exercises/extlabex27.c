/*LAB EXERCISE 1: String Reversal 
Write a C program that takes a string as input and reverses it using a function. 
 Challenge: Write the program without using built-in string handling functions.*/
 #include <stdio.h>
#include <string.h>
void reverse(char ch[]);  //function
int main()
{
    char str1[100];
    printf("Display the reverse string using inbuilt function:\n");
    printf("Enter the first string name:\t");
    gets(str1);

    strrev(str1);
    printf("Using function Reversed string is:\t%s\n",str1);

    printf(" Display The Reverse String Without Using Inbuilt Function:\n");
    char str2[100];
    printf("Enter Your String Name:\t");
    gets(str2);

    reverse(str2);
    return 0;
}

void reverse(char ch[])
{
    int i, length = 0, j = 0;
    char str2[100];
    for (i = 0; ch[i] != '\0'; i++)
    {
        length++;
    }
    for (i = length - 1; i >= 0; i--)
    {
        str2[j] = ch[i];
        j++;
    }

    printf("Using inbuilt Function Reverse String Is:\t");
    for (i = 0; ch[i] != '\0'; i++)
    {
        printf("%c", str2[i]);
    }
}