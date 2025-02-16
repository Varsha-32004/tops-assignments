/*7. Write a C program that uses the break statement to stop printing numbers 
when it reaches 5. Modify the program to skip printing the number 3 using the 
continue statement.*/
#include<stdio.h>
int main()
{
	int i,num;
	printf("\n Enter the number =");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(i==3)
		{
			
			continue;     // Skip  number 3
   

		}
		printf("\n %d",i);
		if(i==5)
		{
			break;        // Exit the loop when i is 5

		}
	}
	
	return 0;
}