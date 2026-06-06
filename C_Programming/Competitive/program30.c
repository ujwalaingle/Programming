//////  Write a program which accepts a number from user and display its table in revers order.

//////  Input : 2
//////  Output : 20 18  16  14  12  10  8   6   4   2

//////  Input : 5
//////  Output : 50 45  40  35  30  25  20  15  10  5

//////  Input : -5
//////  Output : 50 45  40  35  30  25  20  15  10  5

#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;
    int iTab = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 10; iCnt >= 1; iCnt--)
    {
        iTab = iCnt * iNo;

        printf("%d\t", iTab);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d", &iValue);

    TableRev(iValue);
    
    return 0;
}