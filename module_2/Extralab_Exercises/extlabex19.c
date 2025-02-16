/*LAB EXERCISE 2: Multiplication Table 
 
 Write a C program that takes an integer input from the user and prints its multiplication 
table using a for loop. 
 Challenge: Allow the user to input the range of the multiplication table (e.g., from 1 to N). 
*/
#include <stdio.h>
int main()
{
    int num, range, i,j, ans;
    printf("Enter the number for multiplication table:\t");
    scanf("%d", &num);

     for (i = 1; i <= 10; i++)
    {
        ans = num * i;
        printf("%d * %d = %d", num, i, ans);
        printf("\n");
    }

    printf("Enter the range of the multiplication tbale:\t");
    scanf("%d", &range);

    printf("\nThe Multiplication Table Of: %d ", num);
    printf("\n");
    for (j = 1; j<= range; j++)
    {
        ans = num * j;
        printf("%d * %d = %d", num, j, ans);
        printf("\n");
    }

    return 0;
}