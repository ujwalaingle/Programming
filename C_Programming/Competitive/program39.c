//////  Write a program which accepts temperature in Fahrenheit and converts it to Celsius. (1 Celsius = (Fahrenheit - 32) + (5/9)) 

//////  Input : 10
//////  Output : -12.2222 (10-32)*(5/9)

//////  Input : 34
//////  Output : 1.11111 (34-32)*(5/9)

#include<stdio.h>

#define FAHRENHEIT_BASE 32
#define CELSIUS_CONVERSION_FACTOR 5/9

double FhToCs(float fTemp)
{
    double dCelsius = 0;

    dCelsius = (fTemp - FAHRENHEIT_BASE) * CELSIUS_CONVERSION_FACTOR;

    return dCelsius;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0;

    printf("Enter temperature in Fahrenheit : \n");
    scanf("%f", &fValue);

    dRet = FhToCs(fValue);

    printf("%lf\n", dRet);
    
    return 0;
}