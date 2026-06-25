////    Write a program which accepts a string from the user and accepts a character from user.
////    Check whether that character is present in the string or not.

////    Input :     "Ujwal Ingle"
////                'e'
////    Output :    TRUE

////    Input :     "Ujwal Ingle"
////                'b'
////    Output :    FALSE

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    BOOL bFlag = FALSE;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            bFlag = TRUE;
            break;
        }
        str++;
    }
    return bFlag;
}

int main()
{
    char arr[20];
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter string : \n");
    scanf("%[^'\n']", arr);

    printf("Enter a character : \n");
    scanf(" %c", &cValue);

    bRet = ChkChar(arr, cValue);

    if (bRet == TRUE)
    {
        printf("Character found");
    }
    else
    {
        printf("Character not found");
    }

    return 0;
}