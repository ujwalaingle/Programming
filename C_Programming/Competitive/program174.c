////    Write a recursive program which accepts a number from user and returns the smallest digit.
////
////    Input: 87983
////    Output: 3

#include<stdio.h>

int Min(int iNo)
{
    static int iMin = 0;
    int iDigit = 0;

    if (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iMin == 0)
        {
            iMin = iDigit;
        }

        if (iDigit < iMin)
        {
            iMin = iDigit;
        }

        iNo = iNo / 10;
        
        Min(iNo);
    }

    return iMin;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Min(iValue);

    printf("Smallest digit is: %d\n", iRet);

    return 0;
}