/*13. Write a C program to create a file, write a string into it, close the file, then 
open the file again to read and display its contents. */
#include<stdio.h>
int main()
{
    FILE *v1;
    v1=fopen("varsha.txt","w");
    fprintf(v1,"Parmar varsha hardashbhai");
    fclose(v1);

    v1=fopen("varsha.txt","r");
    char str[100];
    
    if (v1==0)
    {
        printf("File Does Not Exits..!");
    }
    else
    {
        while (fgets(str,sizeof(str),v1))
        {
            printf("%s",str);
        }
        
    }
    
    return 0;
}