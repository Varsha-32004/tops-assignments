/*LAB EXERCISE 2: Count Vowels and Consonants 
 
 Write a C program that takes a string from the user and counts the number of vowels and 
consonants in the string. 
 Challenge: Extend the program to also count digits and special characters. */
 #include <stdio.h>
int main()
{
    char str[100];
    int i, vow = 0, con = 0, dig= 0, spe= 0;

    printf("Enter A String Name:\t");   //Enter name
    scanf("%s", &str);

    // counts the number of vowels , consonants ,digits and special charactersin the string. 
    
    for (i = 0; str[i] != '\0'; i++)  
    {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            vow++;
        }
        else if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
        {
            con++;
        }
        else if (ch >= '0' && ch <= '9')
        {
            dig++;
        }
        else
        {
            spe++;
        }
    }


    //print number of  vowels , consonants ,digits and special charactersin the string. 
    
    printf("\n%d  Vowels.", vow);
    printf("\n%d  Consonants.", con);
    printf("\n%d  Digits.", dig);
    printf("\n%d  Speical Characters.", spe);

    return 0;
}