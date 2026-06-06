//////  Write a program which accepts distance in kilometer and convert it to meter. (1 Kilometer = 1000 meter) 

//////  Input : 5
//////  Output : 5000

//////  Input : 12
//////  Output : 12000

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;
    int iKMtoMeterConversion = 1000;
    
    iMeter = iNo * iKMtoMeterConversion;

    return iMeter;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter distance : \n");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("%d\n", iRet);
    
    return 0;
}