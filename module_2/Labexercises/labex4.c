 /*3.Write a C program that accepts two integers from the user and performs 
arithmetic, relational, and logical operations on them. Display the results.*/

#include<stdio.h>
int main()
{
	
    int nm1,nm2;

    //get a value from user
    printf("Enter number(nm1)=");
    scanf("%d",&nm1);

    printf("Enter number(nm2)=");
    scanf("%d",&nm2);

	//arithmetic operations(+,-,*,%,/)
	
	printf("\n %d + %d=%d",nm1,nm2,nm1+nm2);
	printf("\n %d - %d=%d",nm1,nm2,nm1-nm2);
	printf("\n %d / %d=%d",nm1,nm2,nm1/nm2);
	printf("\n (%d)%%(%d)=%d",nm1,nm2,nm1%nm2);
	
	
	//relational operations(<,>,,<=,>=,==)(1=true,0=false)
	
	printf("\n %d > %d = %d",nm1,nm2,nm1>nm2);
	printf("\n %d < %d = %d",nm1,nm2,nm1<nm2);
	printf("\n %d >= %d = %d",nm1,nm2,nm1>=nm2);
	printf("\n %d <= %d = %d",nm1,nm2,nm1<=nm2);
	printf("\n %d == %d = %d",nm1,nm2,nm1==nm2);
	
    //logical oprator--->&&(and),||(or),!(not)(1=true,0=false)
    
    printf("\n %d<%d && %d>%d = %d",nm1,nm2,nm2,nm1,nm1<nm2 && nm2<nm1);
    printf("\n %d<%d || %d>%d = %d",nm1,nm2,nm2,nm1,nm1<nm2 || nm2<nm1);
    printf("\n %d<%d = %d",nm1,nm2,!(nm1<nm2));
	
	return 0;
}