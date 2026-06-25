////    Write a program which accepts a string from user and copy capital letters of the string into another string. 
////
////    Input :     "Ujwal Ingle"
////    Output :    "UI"

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
        if (*src >= 'A' && *src <= 'Z')
        {
            *dest = *src;
            dest++;
        }
        src++;
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
