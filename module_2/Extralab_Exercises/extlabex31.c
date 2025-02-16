/*Lab Challenge 2: Pascal’s Triangle  
 Write a C program that generates Pascal’s Triangle up to N rows using loops. 
  */
 #include <stdio.h>

int main()
 {
    int row, i, j, num = 1;

    
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &row);

    
    for (i = 0; i < row; i++)    // Generate Pascal's Triangle
    {
       
        for (j = 0; j < row - i - 1; j++)    // Print leading spaces
        {
            printf(" ");
        }
        num = 1;                             // Print the numbers in the row
        for (j = 0; j <= i; j++) 
        {
            printf("%d ", num);
            num = num * (i - j) / (j + 1);
        }

        printf("\n");                   // Move to the next line after each row
    }

    return 0;
}
