////    Write a recursive program which accepts a number from user and display product of its digits.
////
////    Input: 523
////    Output: 30

#include<stdio.h>

int Mult(int iNo)
{
    int iDigit = 0;
    int iMult = 1;

    if (iNo != 0)
    {
        iDigit = iNo % 10;
        iMult = iMult * iDigit;
        iNo = iNo / 10;

        iMult = iMult * Mult(iNo);
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet = Mult(iValue);

    printf("Product of digits is: %d\n", iRet);

    return 0;
}