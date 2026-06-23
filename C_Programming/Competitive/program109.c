//  Accept number of rows and number of columns from user and display below pattern
//  Input : Row = 6     Column = 6
//  Output :    *   *   *   *   *   *
//              *   #   #   #   *   *
//              *   #   #   *   $   *
//              *   #   *   $   $   *
//              *   *   $   $   $   *
//              *   *   *   *   *   *

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    int iCount = 0;

    for (i = 1, iCount = iCol; i <= iRow; i++, iCount--)
    {   
        for (j = 1; j <= iCol; j++)
        {
            if ((iCount - j == 0) || (i == 1) || (i == iRow) || (j == 1) || (j == iCol))
            {
                printf("*\t");
            }
            else if (iCount > j)
            {
                printf("#\t");
            }
            else
            {
                printf("$\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows : ");
    scanf("%d", &iValue1);

    printf("Enter number of columns : ");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}