/*LAB EXERCISE 3: Sum of Array Elements 
 Write a C program that takes N numbers from the user and stores them in an array. The 
program should then calculate and display the sum of all array elements. 
 Challenge: Modify the program to also find the average of the numbers*/
 
 #include <stdio.h>
int main() 
{
    int n,arr[n],sum=0;
    
     
    printf("Enter the number of elements: ");   // The number
    scanf("%d", &n);

   
    printf("Enter %d numbers: \n", n);     // Take input for array elements
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];                     // Adding each element to the sum
    }

    
    float average = (float)sum / n;          // Calculate the average

    
    printf("Sum of array elements: %d\n", sum);
    printf("Average of array elements: %.2f\n", average);

    return 0;
}