//////  Write a program which accepts width and height of a rectangle from user and calculate its area. (Area = Width * Height) 

//////  Input : 5.3     9.78
//////  Output : 51.834

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0;
    
    dArea = fWidth * fHeight;

    return dArea;
}

int main()
{
    float fValue1 = 0;
    float fValue2 = 0;
    double dRet = 0;

    printf("Enter width : \n");
    scanf("%f", &fValue1);

    printf("Enter height : \n");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("%lf\n", dRet);
    
    return 0;
}