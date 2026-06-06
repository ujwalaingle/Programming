/////   Write a program which accepts a number from user and count the frequency of such digits which are less than 6.

/////   Input : 2395
/////   Output :    3

/////   Input : 1018
/////   Output :    3

/////   Input : 9440
/////   Output :    3

/////   Input : 96672
/////   Output :    1

#include<stdio.h>

int CountTwo(int iNo)
{   
    int iDigit = 0;
    int iCount = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit < 6)
        {
            iCount++;
        }
        
        iNo = iNo / 10;
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = CountTwo(iValue);

    printf("%d", iRet);

    return 0;
}


///// Time Complexity = O(N) (where N is the number of digits)