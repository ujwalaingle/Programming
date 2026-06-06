//////  Write a program which returns the difference between even factorial and odd factorial of a given number.

//////  Input : 5
//////  Output : -7  (8-15)

//////  Input : -5
//////  Output : -7 (8-15)

//////  Input : 10
//////  Output : 2895 (3840-945)

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iOddFact = 1;
    int iEvenFact = 1;
    int iFactDiff = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if(iCnt % 2 != 0)
        {
            iOddFact = iOddFact * iCnt;                                                                             // Odd Factorial
        }
        else 
        {
            iEvenFact = iEvenFact * iCnt;                                                                           // Even Factorial
        }
    }

    iFactDiff = iEvenFact - iOddFact;                                                                               // Difference between even and odd factorial

    return iFactDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : \n");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("%d\n", iRet);
    
    return 0;
}