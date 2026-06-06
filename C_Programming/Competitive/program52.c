/////   Write a program which accepts a number from user and check whether it contains 0 or not.

/////   Input : 2395
/////   Output :    There is no zero

/////   Input : 1018
/////   Output :    It contains zero

/////   Input : 9000
/////   Output :    It contains zero

/////   Input : 10687
/////   Output :    It contains zero

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{   
    int iDigit = 0;
    BOOL bZeroFound = FALSE;

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit == 0)
        {
            bZeroFound = TRUE;
        }
        
        iNo = iNo / 10;
    }

    return bZeroFound;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    
    printf("Enter number : \n");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);

    if (bRet == TRUE)
    {
        printf("It contains zero");
    }
    else {
        printf("There is no zero");
    }

    return 0;
}


///// Time Complexity = O(N) (where N is the number of digits)