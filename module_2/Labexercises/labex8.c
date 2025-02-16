/*8. Write a C program that calculates the factorial of a number using a function. 
Include function declaration, definition, and call.*/

#include <stdio.h>
int factorial(int num);      //// Function declaration

int main()
{
    int num, result;
    printf("Enter number:");
    scanf("%d", &num);

    result = factorial(num);      // // Function calling

    printf("\nFactorial of %d : %d", num, result);
    return 0;
}
int factorial(int num)   //// Function definition
{
    int i, fact= 1;
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }

    return fact;
}