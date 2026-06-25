////    Write a program which accepts a string from user and accept one character.
////    Return index of first occurence of that character.

////    Input :     "Ujwal Ingle"
////                M
////    Output :    0

////    Input :     "Ujwal Ingle"
////                j
////    Output :    1

#include<stdio.h>

int FirstChar(char *str, char ch)
{
    int iIndex = 0;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            break;
        }
        iIndex++;
        str++;
    }

    if (*str == '\0')
    {
        return -1;
    }
    else{
        return iIndex;
    }
}

int main()
{
    char arr[20];
    char cValue = 0;
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s", arr);

    printf("Enter a character : \n");
    scanf(" %c", &cValue);

    iRet = FirstChar(arr, cValue);

    printf("Index of the first occurrence of the character is : %d\n", iRet);

    return 0;
}