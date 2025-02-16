/*LAB EXERCISE 3: Word Count  
 Write a C program that counts the number of words in a sentence entered by the user. 
*/
#include <stdio.h>
int main()
{
    char str1[100];
    int i, count = 0;

    printf("Enter a string name:");       //Enter string
    gets(str1);

    for (i = 0; str1[i] != '\0'; i++)      //counts the number of words in a sentence entered by the user. 
    {
        if (str1[i] == ' ' && str1[i + 1] != ' ')
        {
            count++;
        }
    }
    printf("\nYour enter a string lenght is:\t%d", count + 1);  //print how maney word in string

    return 0;

}