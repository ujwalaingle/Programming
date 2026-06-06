//////  Write a program to find even factorial of a given number.

//////  Input : 5
//////  Output : 8 (4*2)

//////  Input : -5
//////  Output : 8 (4*2)

//////  Input : 10
//////  Output : 3840 (10*8*6*4*2)

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = iNo; iCnt >= 1; iCnt--)
    {
        // Use only even numbers for multiplication since we need only even factorial
        if (iCnt % 2 == 0)
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

    iRet = EvenFactorial(iValue);

    printf("%d\n",iRet);
    
    return 0;
}