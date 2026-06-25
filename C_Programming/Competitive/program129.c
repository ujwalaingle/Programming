////    Write a program which accepts a string from user and display only digits from that string

////    Input :     "uj89wal121"
////    Output:     "89121"

////    Input :     "Demo"
////    Output:     " "

#include<stdio.h>

void strlwrx(char *str)
{
    int i = 0;

    while (*str != '\0')
    {
        if (*str >= '0' && *str <= '9')
        {
            printf("%c", *str);
        }
        str++;
    }
    printf("\n");
}

int main()
{
    char arr[20];

    printf("Enter a string : \n");
    scanf("%[^'\n']s", arr);

    strlwrx(arr);

    return 0;
}