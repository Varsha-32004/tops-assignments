/*LAB EXERCISE 2: Matrix Addition 
 Write a C program that accepts two 2x2 matrices from the user and adds them. Display the 
resultant matrix. 
 Challenge: Extend the program to work with 3x3 matrices and matrix multiplication.*/
#include <stdio.h>
int main()
{
    int m1[3][3], m2[3][3], sum[3][3], mpt[3][3];
    int i, j, k,rows, cols;
    

    
    printf("Enter the number of rows (2 or 3): ");
    scanf("%d", &rows);
    printf("Enter the number of columns (2 or 3): ");
    scanf("%d", &cols);



    if (rows == 2 && cols == 2)           // Input first 2x2 matrix
    {                  
        
        for (i = 0; i < rows; i++) 
        {
            for (j = 0; j < cols; j++)
            {
                printf("Enter element at [%d][%d]: ", i + 1, j + 1);
                scanf("%d", &m1[i][j]);
            }
        }

        
        for (i = 0; i < rows; i++)       // Input second 2x2 matrix
         {
            for (j = 0; j < cols; j++)
            {
                printf("Enter element at [%d][%d]: ", i + 1, j + 1);
                scanf("%d", &m2[i][j]);
            }
        }

        
        for (i = 0; i < rows; i++)         // Matrix Addition
        {
            for (j = 0; j < cols; j++)
            {
                sum[i][j] = m1[i][j] + m2[i][j];
            }
        }

        
        printf("The sum of the two 2x2 matrices is:\n");
        for (i = 0; i < rows; i++)        // Display the result of addition 
        {
            for (j = 0; j < cols; j++)
            {
                printf("%d ", sum[i][j]);
            }
            printf("\n");
        }

    }
    else if (rows == 3 && cols == 3)
    {
        // Input first 3x3 matrix
        printf("Enter elements of the first 3x3 matrix:\n");
        for (i = 0; i < rows; i++)
         {
            for (j = 0; j < cols; j++)
            {
                printf("Enter element at [%d][%d]: ", i + 1, j + 1);
                scanf("%d", &m1[i][j]);
            }
        }

        // Input second 3x3 matrix
        printf("Enter elements of the second 3x3 matrix:\n");
        for (i = 0; i < rows; i++) 
        {
            for (j = 0; j < cols; j++)
            {
                printf("Enter element at [%d][%d]: ", i + 1, j + 1);
                scanf("%d", &m2[i][j]);
            }
        }

        // Matrix Addition
        for (i = 0; i < rows; i++)
         {
            for (j = 0; j < cols; j++) 
            {
                sum[i][j] = m1[i][j] + m2[i][j];
            }
        }

        // Matrix Multiplication
        for (i = 0; i < rows; i++)
         {
            for (j = 0; j < cols; j++)
             {
                mpt[i][j] = 0;
                for (k = 0; k < cols; k++)
                {
                    mpt[i][j] += m1[i][k] * m2[k][j];
                }
            }
        }

        // Display the result of addition
        printf("The sum of the two 3x3 matrices is:\n");
        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < cols; j++)
            {
                printf("%d ", sum[i][j]);
            }
            printf("\n");
        }

        // Display the result of multiplication
        printf("The product of the two 3x3 matrices is:\n");
        for (i = 0; i < rows; i++) 
        {
            for (j = 0; j < cols; j++) 
            {
                printf("%d ", mpt[i][j]);
            }
            printf("\n");
        }

    } 
    else
    {
        printf("This program only supports 2x2 or 3x3 matrices.\n");
    }

    return 0;
}
