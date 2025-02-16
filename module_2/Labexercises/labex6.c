/*6. Write a C program to print numbers from 1 to 10 using all three types of loops 
(while, for, do-while).*/
#include<stdio.h>
int main()
{
	int i;
    printf("\nFor loop...\n");
    //using for lop to print 1 to 10 number
	for(i=1;i<=10;i++)        //(initialization;condition; increment/decrement))
	{
		printf("\n %d",i);
	}
	
    printf("\nwhile loop...\n");
    //using while to print 1 to 10 number
	i=1;                     //(initialization)
	while(i<=10)             //(condition)
	{
		printf("\n %d",i);
		i++;                //( increment/decrement))
	}

    printf("\nDo...while loop...\n");
    //using do...while lop to print 1 to 10 number
	i=1;                     //(initialization)
	do
	{
		printf("\n %d",i); 
		i++;                 //( increment/decrement))
		
	}while(i<=10);           //(condition)
	
	return 0;
}