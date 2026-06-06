//////  Write a program to find odd factorial of a given number.

//////  Input : 5
//////  Output : 15 (5*3*1)

//////  Input : -5
//////  Output : 15 (5*3*1)

//////  Input : 10
//////  Output : 945 (9*7*5*3*1)

#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if(iCnt % 2 != 0)
        {
            iFact = iFact * iCnt;
        }
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : \n");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);

    printf("%d\n",iRet);
    
    return 0;
}