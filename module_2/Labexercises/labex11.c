/* 11.Write a C program that takes two strings from the user and concatenates them 
using strcat(). Display the concatenated string and its length using 
strlen().*/
#include <stdio.h>
#include <string.h>
int main()
{
    char a[10], b[10];
    printf("Enter a string name:");
    gets(a);
    printf("Enter b string name:");
    gets(b);

    strcat(a,b);
    printf("\nThe string after concatenates : %s ",a);
    

    int stringlength = strlen(a);
    printf("\nThe length of concatenates string is  %d ",stringlength);
    return 0;
}