////    Write a program which displays the ASCII table. Table contains symbol, decimal, 
////    hexadecimal and octal representation of every member from 0 to 255.

#include<stdio.h>

void DisplayASCII()
{
    int i = 0;

    printf("ASCII Table\n");
    printf("-------------------------------------------------\n");
    printf("Decimal\tHexadecimal\tOctal\tSymbol\n");
    printf("-------------------------------------------------\n");
    for (i = 0; i <= 255; i++)
    {
        if (i < 32 || i == 127)
        {
            printf("%d\t%X\t%o\tNon-printable\n", i, i, i);
        }
        printf("%d\t%X\t%o\t%c\n", i, i, i, i);
    }
}

int main()
{
    DisplayASCII();
    return 0;
}