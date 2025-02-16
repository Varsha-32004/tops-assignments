/*LAB EXERCISE 2: Check Number Properties 
 Write a C program that takes an integer from the user and checks the following using 
different operators: 
o Whether the number is even or odd. 
o Whether the number is positive, negative, or zero. 
o Whether the number is a multiple of both 3 and 5.*/
#include <stdio.h>

int main()
 {
    int num;

    printf("Enter number: ");
    scanf("%d", &num);
    if (num % 2 == 0)      // Check whether the number is even or odd
    {
        printf("%d is even.\n",num);
    } 
    else
    {
        printf("%d is odd.\n",num);
    }

   
    
    if (num > 0)                  // Check whether the number is positive, negative, or zero
    {
        printf("%d is positive number.\n",num);
    } 
    else if (num < 0)
    {
        printf("%d is negative number.\n",num);
    }
     else
    {
        printf("%d is zero.\n",num);
    }

   
    if (num % 3 == 0 && num % 5 == 0)   // Check whether the number is a multiple of both 3 and 5
    {
        printf("%d is a multiple of both 3 and 5.\n");
    }
    else
    {
        printf("%d is not a multiple of both 3 and 5.\n");
    }

    return 0;
}
