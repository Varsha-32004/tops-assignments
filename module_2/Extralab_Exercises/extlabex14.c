/*LAB EXERCISE 1: Simple Calculator 
 Write a C program that acts as a simple calculator. The program should take two numbers 
and an operator as input from the user and perform the respective operation (addition, 
subtraction, multiplication, division, or modulus) using operators. 
 Challenge: Extend the program to handle invalid operator inputs.*/
 #include<stdio.h>
 int main()
 {
    int n1,n2,opertor;

    printf("\n Enter first number=");
    scanf("%d",&n1);

    printf("\n Enter second number=");
    scanf("%d",&n2);

    printf("\n Enter operator(+,-,*,/,%%)=");
    scanf(" %c",&opertor);

    switch(opertor)
    {
        case '+':
                    printf("%d and %d addition is = %d ",n1,n2,n1+n2);
                    break;
        case '-':
                    printf("%d and %d subtraction is = %d ",n1,n2,n1-n2);
                    break;
        case '*':
                    printf("%d and %d multiplication is = %d ",n1,n2,n1*n2);
                    break;
        case '/':
                    printf("%d and %d division is = %.2f",n1,n2,(float)n1/(float)n2);
                    break;
        case '%':
                    printf("%d and %d modulus is = %d",n1,n2,n1 % n2);
                    break;
        default:
                    printf("Error: Invalid operator. Please use +, -, *, /, or %\n");
                    break;

    }
    return 0;
 }