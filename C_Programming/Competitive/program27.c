//////  Accept a single digit from user and print it into words.

//////  Input : 9
//////  Output : Nine

//////  Input : -3
//////  Output : Three

//////  Input : 12
//////  Output : Invalid Number

#include<stdio.h>

void Display(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    
    if(iNo >= 0 && iNo <= 9)
    {
        if(iNo == 0)
        {
            printf("Zero");
        }
        if(iNo == 1)
        {
            printf("One");
        }if(iNo == 2)
        {
            printf("Two");
        }if(iNo == 3)
        {
            printf("Three");
        }if(iNo == 4)
        {
            printf("Four");
        }if(iNo == 5)
        {
            printf("Five");
        }if(iNo == 6)
        {
            printf("Six");
        }if(iNo == 7)
        {
            printf("Seven");
        }if(iNo == 8)
        {
            printf("Eight");
        }
        if(iNo == 9)
        {
            printf("Nine");
        }
    }
    else
    {
        printf("Invalid Number");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d", &iValue);

    Display(iValue);
    
    return 0;
}