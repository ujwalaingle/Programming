////    Write a program which accepts a string from user and toggle the  case

////    Input :     "Ujwal Ingle"
////    Output:     "uJWAL iNGLE"

#include<stdio.h>

void strlwrx(char *str)
{
    int i = 0;

    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            *str = (char) (*str - 32);
        }
        else if (*str >= 'A' && *str <= 'Z')
        {
            *str = (char) (*str + 32);
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter a string : \n");
    scanf("%[^'\n']s", arr);

    strlwrx(arr);

    printf("Modified string is : %s\n", arr);

    return 0;
}