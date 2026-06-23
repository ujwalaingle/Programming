////    Write a program which accepts a string from user 
////    and count number of small characters

#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter a string : \n");
    scanf("%[^'\n']s", arr);

    iRet = CountSmall(arr);

    printf("Number of small characters : %d\n", iRet);

    return 0;
}