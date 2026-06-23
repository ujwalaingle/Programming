////    Write a program which accepts a string from user 
////    and check whether it contains vowels in it or not.

////    Input : "marvellous"
////    Output : TRUE

////    Input : "DEMO"
////    Output : TRUE

////    Input : "xyz"
////    Output : FALSE

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    BOOL bFlag = FALSE;

    while(*str != '\0')
    {
        if ((*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U') || 
            (*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
        {
            bFlag = TRUE;
        }
        str++;
    }
    return bFlag;
}

int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter a string : \n");
    scanf("%[^'\n']s", arr);

    bRet = ChkVowel(arr);

    if (bRet == TRUE)
    {
        printf("Contains vowel\n");
    }
    else 
    {
        printf("There is no vowel\n");
    }

    return 0;
}