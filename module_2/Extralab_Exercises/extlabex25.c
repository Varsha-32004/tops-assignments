/*LAB EXERCISE 2: Factorial Calculation 
 
 Write a C program that calculates the factorial of a given number using a function. 
 Challenge: Implement both an iterative and a recursive version of the factorial function and 
compare their performance for large numbers. 
*/
#include <stdio.h>
int factorial(int num);
int main()
{
    int num;
    printf("Enter The Value Of N1:\t");
    scanf("%d", &num);
    int result = factorial(num);
    printf("%d Factorial Value Is: %d", num, result);

    return 0;
}
int factorial(int num)
{
    int i, fact = 1;
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}