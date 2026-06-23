////    Write a program which accepts string from user and displays it is reverse order

////    Inout : "MarvellouS"
////    Output : "SoullevraM"

#include<stdio.h>

void Reverse(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';

    start = str;
    
    while (*str != '\0')
    {
        str++;
    }
    str--;
    end = str;

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char arr[20];

    printf("Enter a string : \n");
    scanf("%[^'\n']s", arr);

    Reverse(arr);

    printf("Updated string is : %s\n", arr);
    return 0;
}