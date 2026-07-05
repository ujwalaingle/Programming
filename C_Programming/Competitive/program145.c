////    Write a program which checks the whether the first and last bit is on or off. First bit means bit no. 1 and last bit means bit no. 32.

#include<stdio.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x80000001;
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
        printf("7th & 8th & 9th bit is ON\n");
    }
    else
    {
        printf("7th & 8th & 9th bit is OFF\n");
    }

    return 0;
}