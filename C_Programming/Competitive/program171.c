////    Write a recursive program which accepts a string from user and counts white spaces.
////
////    Input: HE llo WOr lD
////    Output: 3

#include<stdio.h>

int WhiteSpace(char *str)
{
    static int i = 0;
    static int iCount = 0;

    if (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            iCount++;
        }
        i++;
        WhiteSpace(str);
    }

    return iCount;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter a string: \n");
    scanf("%[^\n]s", arr);

    iRet = WhiteSpace(arr);

    printf("No. of white spaces: %d\n", iRet);

    return 0;
}