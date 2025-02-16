/*LAB EXERCISE 3: Sum of Digits 
 Write a C program that takes an integer from the user and calculates the sum of its digits 
using a while loop. 
 Challenge: Extend the program to reverse the digits of the number. */
 #include<stdio.h>
int main()
{
	int rem,num,sum=0,reverse=0;
	
	printf("Enter the number:");
	scanf("%d",&num);//1356
	
	while(num>0)
	{	
		rem=num%10;
		sum=sum+rem;               //the sum of its digit
		reverse=reverse*10+rem;   //reverse the digits
		num=num/10;	
	}
		
	printf("Sum of given number is %d",sum);
	printf("\nReverse of given value is %d",reverse);
	
	return 0;
}