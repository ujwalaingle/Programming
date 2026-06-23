////    Accept a character from user. If it is capital then display all the 
////    characters from the input character to Z. If input character is small
////    then print all the characters in reverse order till a. 
////    In other cases return directly.

#include<stdio.h>

void Display(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        while (ch <= 'Z')
        {
            printf("%c\t", ch);
            ch++;
        }
        printf("\n");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        while (ch >= 'a')
        {
            printf("%c\t", ch);
            ch--;
        }
        printf("\n");
    }
    else 
    {
        return;
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter a character : \n");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}