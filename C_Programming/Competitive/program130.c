////    Write a program which accepts a string from user and count number of white spaces

////    Input :     "Ujwal"
////    Output:     "0"

////    Input :     "Ujwal Ingle"
////    Output:     "1"

////    Input :     "Ujwal Ingle DS Prep"
////    Output:     "3"

#include<stdio.h>

int strlwrx(char *str)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if (*str == ' ')
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
    int iRet = 0;

    printf("Enter a string : \n");
    scanf("%[^'\n']s", arr);

    iRet = strlwrx(arr);

    printf("Number of white spaces are : %d\n", iRet);

    return 0;
}