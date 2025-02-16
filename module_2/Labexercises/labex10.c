/* 10.Write a C program to demonstrate pointer usage. Use a pointer to modify the 
value of a variable and print the result. */
#include <stdio.h>
int main()
{
   
    int v;
    printf("Enter The Value Of A:");
    scanf("%d", &v);
    int *ptr = &v;  //Pointer Declaration and Assignment


    printf("\n The Value Of v: %d ", v);//print the value of v.

    printf("\nAdress Of v: %d ", *ptr);  ////print the value of v.

    printf("\nAdress Of v: %p ", ptr);  //%p format specifier is used to print pointer values.


    return 0;
}