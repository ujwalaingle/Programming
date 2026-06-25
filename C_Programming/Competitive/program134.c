////    Write a program which accepts a string from user and accept one character.
////    Return index of last occurence of that character.

////    Input :     "Ujwal Ingle"
////                M
////    Output :    0

////    Input :     "Ujwal Ingle"
////                l
////    Output :    9

#include<stdio.h>

int FirstChar(char *str, char ch)
{
    int iCount = 0;
    int iIndex = 0;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            iIndex = iCount;
        }
        iCount++;
        str++;
    }

    if (iIndex > 0)
    {
        return iIndex;
    }
    else
    {
        return -1;
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

    printf("Index of the last occurrence of the character is : %d\n", iRet);

    return 0;
}