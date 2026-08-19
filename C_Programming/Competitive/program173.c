////    Write a recursive program which accepts a string from user and counts number of small characters.
////
////    Input: HElloWOrlD
////    Output: 5

#include<stdio.h>

int Small(char *str)
{
    static int i = 0;
    static int iCount = 0;

    if (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            iCount++;
        }
        i++;
        Small(str);
    }

    return iCount;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter a string: \n");
    scanf("%s", arr);

    iRet = Small(arr);

    printf("Number of small characters are: %d\n", iRet);

    return 0;
}