////    Write a recursive program which displays below pattern
////
////    Output :    *   *   *   *   *

#include<stdio.h>

void Display()
{
    static int i = 5;

    if (i != 0)
    {
        printf("*\t");
        i--;
        Display();
    }
}

int main()
{
    Display();
    return 0;
}