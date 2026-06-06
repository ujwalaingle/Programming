/////   Write a program which accepts a range from user and display all even numbers between that range.

/////   Input : 23  35
/////   Output : 24 26  28  30  32  33  34

/////   Input : 10  18
/////   Output : 10 12  14  16  18

/////   Input : 10  10
/////   Output : 10

/////   Input : -10  2
/////   Output : -10    -8  -6  -4  -2  0   2

/////   Input : 90  18
/////   Output : Invalid range

#include<stdio.h>

void RangeDisplay(int iNo1, int iNo2)
{   
    int iCnt = 0;

    if (iNo1 > iNo2)
    {
        printf("Invalid range");
    }

    for (iCnt = iNo1; iCnt <= iNo2; iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    
    printf("Enter starting point : \n");
    scanf("%d", &iValue1);

    printf("Enter ending point : \n");
    scanf("%d", &iValue2);

    RangeDisplay(iValue1, iValue2);

    return 0;
}

// Time Complexity = O(N) (where N is the number of digits)