////    Write a program which accepts a string from user and copy the contents of the string into another string. 
////    Then accept a number from user and copy that number of elements in a new string.
////    NOTE : If third parameter is greater than the size of the source string, then copy the whole string into the destination.
////
////    Input :     "Ujwal Ingle"
////                5
////    Output :    "Ujwal"

#include<stdio.h>

void StrCpyX(char *src, char *dest, int iCnt)
{

    if ((src == NULL) || (dest == NULL))
    {
        printf("Invalid input\n");
        return;
    }

    if (iCnt <= 0)
    {
        printf("Invalid input\n");
        return;
    }

    while (*src != '\0' && iCnt != 0)
    {
        *dest = *src;
        src++;
        dest++;
        iCnt--;
    }
    *dest = '\0';
}

int main()
{
    char arr[30];
    char brr[30];
    int iValue;

    printf("Enter a string : \n");
    scanf("%[^'\n']s", arr);

    printf("Enter the number of elements to copy : \n");
    scanf("%d", &iValue);

    StrCpyX(arr, brr, iValue);

    printf("Copied string is : %s\n", brr);
    return 0;
}
