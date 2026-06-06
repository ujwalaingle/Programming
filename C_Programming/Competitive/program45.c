/////   Write a program which accepts a number from user and returns the difference between the summation of even digits and summation of odd digits.

/////   Input : 2395
/////   Output : -15 (2-17)

/////   Input : 1018
/////   Output : 6 (8-2)

/////   Input : 8440
/////   Output : 16 (16-0)

/////   Input : 5733
/////   Output : -18 (0-18)

#include<stdio.h>

int CountDiff(int iNo)
{   
    int iDigit = 0;
    int iSumEven = 0;
    int iSumOdd = 0;
    int iSumDiff = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit % 2 == 0)
        {
            iSumEven = iSumEven + iDigit;
        }
        else
        {
            iSumOdd = iSumOdd + iDigit;
        }

        iNo = iNo / 10;
    }

    iSumDiff = iSumEven - iSumOdd;

    return iSumDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);

    printf("%d", iRet);

    return 0;
}

// Time Complexity = O(N) (where N is the number of digits)