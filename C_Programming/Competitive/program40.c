//////  Write a program which accepts area in square feet and convert it into square meter. (1 square feet = 0.0929 square meter) 

//////  Input : 5
//////  Output : 0.464515

//////  Input : 7
//////  Output : 0.650321

#include<stdio.h>

#define SQ_FEET_TO_SQ_METER_CONVERSION  0.0929

double SquareMeter(int iArea)
{
    double dSqMeter = 0.0;

    dSqMeter = iArea * SQ_FEET_TO_SQ_METER_CONVERSION;

    return dSqMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0;

    printf("Enter distance : \n");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("%lf\n", dRet);
    
    return 0;
}