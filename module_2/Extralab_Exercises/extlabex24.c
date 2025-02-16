/*LAB EXERCISE 1: Fibonacci Sequence 
 Write a C program that generates the Fibonacci sequence up to N terms using a recursive 
function. 
 Challenge: Modify the program to calculate the Nth Fibonacci number using both iterative 
and recursive methods. Compare their efficiency.*/
#include<stdio.h>    
void fibo(int num); 
int main()
{    
    int num;    
    printf("Enter the number of elements: ");    
    scanf("%d",&num);    
    printf("Fibonacci Series: ");    
    printf("%d %d ",0,1);    
    fibo(num-2);  
	return 0;  
}

void fibo(int num)
{    
    static int n1=0,n2=1,n3;    
    if(num>0)
	{    
        n3 = n1 + n2;    
	    n1 = n2;    
	    n2 = n3;    
	    printf("%d ",n3);    
	    fibo(num-1);    
    }    
}   