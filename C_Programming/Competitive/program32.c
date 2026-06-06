//////  Accept amount in US dollar and return its corresponding value in Indian rupees. Consider 1$ as 70 rupees.

//////  Input : 10
//////  Output : 700

//////  Input : 3
//////  Output : 270

//////  Input : 1200
//////  Output : 84000

#include<stdio.h>

int DollarToINR(int iNo)
{
    int iConversion = 0;
    int iOneDollarInINR = 70;

    iConversion = iOneDollarInINR * iNo;

    return iConversion;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : \n");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("%d\n", iRet);
    
    return 0;
}