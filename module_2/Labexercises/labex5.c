 /*5.Write a C program to check if a number is even or odd using an if-else 
statement. Extend the program using a switch statement to display the month 
name based on the user’s input (1 for January, 2 for February, etc.). */
#include<stdio.h>
int main()
{
	// EVEN / ODD
	
	int num,month;
	
	printf("\nEnter number=");
	scanf("%d",&num);
	
	if(num%2==0)
	{
		printf("\n Number  %d is even\n",num);
	}
	else
	{
		printf("\n Number %d is odd\n",num);
	}
	
	printf("Enter number(1 to 12)=");
	scanf("%d",&month);
	switch(month)
	{

		case 1:
			printf("\n January");
			break;
		case 2:
			printf("\n February");
			break;
		case 3:
			printf("\n March");
			break;
		case 4:
			printf("\n April");
			break;
		case 5:
			printf("\n May");
			break;
		case 6:
			printf("\n June");
			break;
		case 7:
			printf("\n July");
			break;
		case 8:
			printf("\n August");
			break;
		case 9:
			printf("\n September");
			break;
		case 10:
			printf("\n October");
			break;
		case 11:
			printf("\n November");
			break;
		case 12:
			printf("\n December");
			break;
        default:
            printf("Invaliud Choice...!");
        break;
		
	}
return 0;

}