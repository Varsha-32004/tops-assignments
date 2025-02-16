/*LAB EXERCISE 1: Maximum and Minimum in Array 
  Write a C program that accepts 10 integers from the user and stores them in an array. The 
program should then find and print the maximum and minimum values in the array. 
 Challenge: Extend the program to sort the array in ascending order.*/
 #include <stdio.h>
int main()
{
    int maximum, minimum,num[10], i, j, temp;

    for (i = 0; i < 10; i++)
    {
        printf("Enter the number num[%d]:", i);
        scanf("%d", &num[i]);
    }

    //print The Maximum And Minimum Number
    maximum = num[0];
    minimum = num[0];
    for (i = 1; i < 10; i++)
    {
        if (num[i] > maximum)
        {
            maximum = num[i];
        }
        if (num[i] < minimum)
        {
            minimum = num[i];
        }
    }
    printf("\nMaximum number is=%d", maximum);
    printf("\nMinimum number is=%d", minimum);

    // The ascending order number
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (num[i] > num[j])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    
    printf("\n Acending Number Is:");
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", num[i]);
    }

    return 0;
}