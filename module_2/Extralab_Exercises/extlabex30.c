/*Lab Challenge 1: Armstrong Number 
 
 Write a C program that checks whether a given number is an Armstrong number or not (e.g., 
153 = 1^3 + 5^3 + 3^3). 
 Challenge: Write a program to find all Armstrong numbers between 1 and 1000. */
#include <stdio.h>
#include <math.h>

int main()
 {
    int num1, temp, remainder, sum, digits;

    printf("Armstrong numbers between 1 and 1000:\n");

    for (num1 = 1; num1 <= 1000; num1++)
     {
        temp = num1;
        sum = 0;
        digits = 0;

        while (temp != 0)     // Find number of digits in the number
        {
            temp /= 10;
            digits++;
        }
        temp = num1;
        while (temp != 0)             // Calculate sum of powers of digits
        {
            remainder = temp % 10;
            sum += pow(remainder, digits);    // Raise each digit to the power of 'digits'
            temp /= 10;
        }
        if (sum == num1)           // Check if the sum equals the original number
        {
            printf("%d is an Armstrong number\n", num1);
        }
    }

    return 0;
}
