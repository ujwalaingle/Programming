/////   Write a program which accepts a number from user and returns the multiplication of all digits.

/////   Input : 2395
/////   Output : 270

/////   Input : 1018
/////   Output : 8

/////   Input : 9440
/////   Output : 144

/////   Input : 922432
/////   Output : 864

#include<stdio.h>

int MultDigits(int iNo)
{   
    int iDigit = 0;
    int iProd = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit != 0)
        {
            iProd = iProd * iDigit;
        }

        iNo = iNo / 10;
    }

    return iProd;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);

    printf("%d", iRet);

    return 0;
}

// Time Complexity = O(N) (where N is the number of digits)