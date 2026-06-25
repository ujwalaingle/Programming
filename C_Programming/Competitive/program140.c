////    Write a program which accepts 2 strings from user and concat the first string after the second string (Implement strcat() function).
////
////    Input :     "Ujwal Ingle"
////                "Learns DSA"
////    Output :    "Ujwal Ingle Learns DSA"

#include<stdio.h>

void StrCatX(char *src, char *dest)
{
    if ((src == NULL) || (dest == NULL))
    {
        printf("Invalid input\n");
        return;
    }

    while (*src != '\0')
    {
        src++;
    }

    *src = ' ';
    src++;

    while (*dest != '\0')
    {
        *src = *dest;
        src++;
        dest++;
    }
    *src = '\0';
}

int main()
{
    char arr[50];
    char brr[30];

    printf("Enter first string : \n");
    scanf("%[^'\n']s", arr);

    printf("Enter second string : \n");
    scanf(" %[^'\n']s", brr);

    StrCatX(arr, brr);

    printf("Concatenated string is : %s\n", arr);
    return 0;
}