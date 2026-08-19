////    Write a recursive program which accepts a number from user and display summation of its digits.
////
////    Input: 879
////    Output: 24

#include<stdio.h>

int Sum(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    if (iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;

        iSum = iSum + Sum(iNo);
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Sum(iValue);

    printf("Sum of digits is: %d\n", iRet);

    return 0;
}