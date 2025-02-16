/* 12.Write a C program that defines a structure to store a student's details (name, 
roll number, and marks). Use an array of structures to store details of 3 
students and print them.*/
#include<stdio.h>
struct Student    // structure to store a student's details
{
	char name[50];
	int rollno;
	int marks;
};
int main()
{
	struct Student students[50];   // array of structures to store details of  students

	int count,i;
	printf("\nEnter the count = ");
	scanf("%d",&count);
	for(i=0;i<count;i++)
	{
        printf("\nEnter details of Student %d:\n", i + 1);
		printf("\nEnter the name= ");
		scanf("%s",&students[i].name);
		printf("\nEnter the rollno = ");
		scanf("%d",&students[i].rollno);
		printf("\nEnter the mark= ");
		scanf(" %d",&students[i].marks);
	}
	for(i=0;i<count;i++)   //Print details of  students

	{
        printf("\nDetails of Student %d:\n", i + 1);
		printf("\nName = %s",students[i].name);
		printf("\nRollnumber = %d",students[i].rollno);
		printf("\nMark = %d\n",students[i].marks);
	}
	return 0;
}