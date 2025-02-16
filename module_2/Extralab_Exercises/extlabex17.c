/*LAB EXERCISE 2: Number Comparison 
Write a C program that takes three numbers from the user and determines: 
o The largest number. 
o The smallest number. 
Challenge: Solve the problem using both if-else and switch-case statements.*/
#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter the number  of num1:");
    scanf("%d", &num1);
    printf("Enter the number of num2:");
    scanf("%d", &num2);
    printf("Enter the number of num3:");
    scanf("%d", &num3);

    if (num1 >= num2 && num1 >= num3)     //find largest number and smallest number
    {
        printf("\nnum1 is largest number:%d",num1);
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        printf("\nnum2 is   largest number:%d", num2);
    }
    else
    {
        printf("\nnum2 is   largest number:%d", num3);
    }

    if (num1 <= num2 && num1 <= num3)
    {
        printf("\nnum1 is  smallest number:%d", num1);
    }
    else if (num2 <= num1 && num2 <= num3)
    {
        printf("\nnum2 is  smallest number:%d", num2);
    }
    else
    {
        printf("\nnum3 is  smallest number:%d", num3);
    }

    // using switch case
    switch (num1 >= num2 && num1 >= num3)
    {
    case 1:
        printf("\nnum1 is largest number:%d",num1);
    case 0:
        switch (num2 >= num1 & num2 >= num3)
        {
        case 1:
            printf("\nnum2 is largest number:%d",num2);
            break;
        default:
            printf("\nnum3 is largest number:%d",num3);
            break;
        }
        break;

    default:
        printf("Invalid operaters...!");
        break;
    }
    switch (num1 <= num2 && num1 <= num3)
    {
    case 1:
        printf("\nnum1 is  smallest number:%d", num1);
        break;
    case 0:
        switch (num2 <= num1 && num2 <= num3)
        {
        case 1:
            printf("\nnum2 is  smallest number:%d", num2);
            break;
        default:
            printf("\nnum3 is  smallest number:%d", num3);
            break;
        }
        break;
    default:
        printf("Invalid operaters...!");
        break;
    }
    return 0;
}