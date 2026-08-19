////    Write a recursive program to accept a string from user and count the number of characters.
////
////    Input: Hello
////    Output: 5

#include<stdio.h>

int Strlen(char *str)
{
    static int i = 0;

    if (str[i] != '\0')
    {
        i++;
        Strlen(str);
    }

    return i;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter a string: ");
    scanf("%s", Arr);

    iRet = Strlen(Arr);

    printf("Number of characters are: %d\n", iRet);

    return 0;
}