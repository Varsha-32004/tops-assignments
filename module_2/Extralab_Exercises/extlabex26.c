/*LAB EXERCISE 3: Palindrome Check  
 Write a C program that takes a number as input and checks whether it is a palindrome using 
a function. 
 Challenge: Modify the program to check if a given string is a palindrome. */
 
#include<stdio.h>
int palindrome(int n1)
{
	int  reverse=0,rem;
	while(n1>0)
	{
		rem=n1%10;
		reverse= reverse*10+rem;
		n1=n1/10;
	}
	return  reverse;
}

int main()
{	
	int num,ans;
	printf("Enter the number:"); // user give number
	scanf("%d",&num);
	
	ans=palindrome(num);
	if(ans==num)
	{
		printf("%d is palindrome number.",num);
	}
	else
	{
		printf("%d is not palindrome number.",num);
	}
	return 0;
}

