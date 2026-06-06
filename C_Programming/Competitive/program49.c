/////   Write a program which accepts a range from user and return addition of all even numbers in between that range. (Range should contain positive numbers only)

/////   Input : 23  30
/////   Output : 108

/////   Input : 10  18
/////   Output : 70

/////   Input : -10  2
/////   Output : Invalid range

/////   Input : 90  18
/////   Output : Invalid range

#include<stdio.h>

int RangeSumEven(int iNo1, int iNo2)
{   
    int iCnt = 0;
    int iSumEven = 0;

    if (iNo1 < 0 || iNo1 > iNo2)
    {
        return -1;
    }
    else
    {
        for (iCnt = iNo1; iCnt <= iNo2; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iSumEven = iSumEven + iCnt;
            }
        }
    }

    return iSumEven;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;
    
    printf("Enter starting point : \n");
    scanf("%d", &iValue1);

    printf("Enter ending point : \n");
    scanf("%d", &iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    if (iRet == -1)
    {
        printf("Invalid range");
    }
    else
    {
        printf("Addition is : %d", iRet);
    }

    return 0;
}

// Time Complexity = O(N) (where N is the number of digits)