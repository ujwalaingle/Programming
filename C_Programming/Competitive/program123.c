////    Write a program which accepts a string from user 
////    and difference between the frequency of small characters and 
////    frequency of capital characters
////    Input : "MarvellouS"
////    Output : 6 (8-2)

#include<stdio.h>

int Difference(char *str)
{
    int iCountCapital = 0;
    int iCountSmall = 0;

    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            iCountSmall++;
        }
        else if (*str >= 'A' && *str <= 'Z')
        {
            iCountCapital++;
        }
        str++;
    }
    return iCountSmall - iCountCapital;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter a string : \n");
    scanf("%[^'\n']s", arr);

    iRet = Difference(arr);

    printf("Difference is : %d\n", iRet);

    return 0;
}