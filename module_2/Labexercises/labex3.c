/*2. Write a C program that includes variables, constants, and comments. Declare 
and use different data types (int, char, float) and display their values.*/

#include<stdio.h>
#define  ch 'p'//constants
int main()
{
	
	int a=40;
	char b='v';//single coma is complshari
	float c=3.3;//if you wont fix digit after point using %.2f,%.3f,%.4f,%.5f
	const int d=30;// make constants value using const keyworld
	
	printf("\n %d",a);
	printf("\n %c",b);
	printf("\n %f",c);
	printf("\n %d",d);
    printf("\n %c",ch);
	
	return 0;
}