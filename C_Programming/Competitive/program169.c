////    Write a recursive program to accept a number from user and return its factorial.
////
////    Input: 5
////    Output: 120

#include<stdio.h>

int Fact(int iNo)
{
    int iFact = 1;

    if (iNo != 0)
    {
        iFact = iFact * iNo;
        iFact = iFact * Fact(iNo - 1);
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet = Fact(iValue);

    printf("Factorial: %d\n", iRet);

    return 0;
}