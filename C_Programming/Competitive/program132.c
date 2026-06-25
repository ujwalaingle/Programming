////    Write a program which accepts a string from a user and accepts one character.
////    Return frequency of that character

////    Input :     "Ujwal Ingle"
////                U
////    Output :    "Count of character in the string is : 1"

////    Input :     "Ujwal Ingle"
////                l
////    Output :    "Count of character in the string is : 2"

#include<stdio.h>

int CountChar(char *str, char ch)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char arr[20];
    char cValue = '\n';
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s", arr);

    printf("Enter a character : \n");
    scanf(" %c", &cValue);

    iRet = CountChar(arr, cValue);

    printf("Count of character in the string is : %d\n", iRet);

    return 0;
}