////    Write a program which checks the whether the 7th & 15th & 21st & 28th bit is on or off

#include<stdio.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x8104040;
    UINT iAns = 0;

    iAns = iNo & iMask;

    if (iAns == iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    UINT iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter a number : \n");
    scanf("%d", &iValue);

    bRet = ChkBit(iValue);

    if (bRet == TRUE)
    {
        printf("7th & 15th & 21st & 28th bit is ON\n");
    }
    else
    {
        printf("7th & 15th & 21st & 28th bit is OFF\n");
    }

    return 0;
}