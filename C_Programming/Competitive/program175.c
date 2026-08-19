////    Write a recursive program which accepts a number from user and return the reversed number.
////
////    Input: 523
////    Output: 325

#include<stdio.h>

int Reverse(int iNo)
{
    int iDigit = 0;
    static int iRev = 0;

    if (iNo != 0)
    {
        iDigit = iNo % 10;
        
        if (iRev == 0)
        {
            iRev = iDigit;
        }
        else
        {
            iRev = iRev * 10 + iDigit;
        }

        iNo = iNo / 10;
        Reverse(iNo);
    }

    return iRev;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Reverse(iValue);

    printf("Reversed number is: %d\n", iRet);

    return 0;
}