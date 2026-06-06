//////  Write a program which accepts radius of circle from user and calculate its area. 
/////   Consider value of PI as 3.14. (Area = PI * Radius * Radius)

//////  Input : 5.3
//////  Output : 88.2026

//////  Input : 10.4
//////  Output : 339.6224

#include<stdio.h>

double CircleArea(float fRadius)
{
    double dArea = 0.0;
    float fPi = 3.14f;                                                                      // Given value of PI

    dArea = fPi * fRadius * fRadius;

    return dArea;
}

int main()
{
    float fValue = 0;
    double dRet = 0;

    printf("Enter radius : \n");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("%lf\n", dRet);
    
    return 0;
}