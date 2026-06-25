////    Write a program which accepts a string from user and copy the contents of the string into another string (Implement strcpy() function)
////
////    Input :     "Ujwal Ingle"
////    Output :    "Ujwal Ingle"

#include<stdio.h>

void StrCpyX(char *src, char *dest)
{
    if ((src == NULL) || (dest == NULL))
    {
        printf("Invalid input\n");
        return;
    }

    while (*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';

}

int main()
{
    char arr[30];
    char brr[30];

    printf("Enter a string : \n");
    scanf("%[^'\n']s", arr);

    StrCpyX(arr, brr);

    printf("Copied string is : %s\n", brr);

    return 0;
}