/*LAB EXERCISE 1: Prime Number Check 
  Write a C program that checks whether a given number is a prime number or not using a for 
loop. 
 Challenge: Modify the program to print all prime numbers between 1 and a given number.*/
 #include <stdio.h>
 int main()
 {
   int num, i, j, count = 0;
   printf("\nEnter the num = ");
	 scanf("%d",&num);
	 for(i=2;i<=num/2;i++)
	 {
	  	if(num%i==0)
		 {
		  	count++;
		 }
	 }
	 if(count==0)
	 {
	  	printf("\n%d is a prime number",num);
	 }
	 else
	 {
	  	printf("\n%d is not a prime number",num);
	 }
    
     for (i = 1; i <= num; i++)             //print all prime numbers between 1 and a given number.
     {
         for (j = 2; j <= i; j++)
         {
             if (i % j == 0)
             {
                 break;
             }
         }
         if (i == j)
         {
             printf("\n %d ", j);
         }
     }
     return 0;
 }