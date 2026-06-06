//// Accept N numbers from user and return the difference between the frequency of even and odd numbers.

//// Input : N : 7
//// Elements : 85 66 3 80 93 88 90
//// Output : 1 (4 - 3)


#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize)
{
    int iCnt = 0;
    int iCountEven = 0;
    int iCountOdd = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] % 2 == 0)
        {
            iCountEven++;
        }
        else
        {
            iCountOdd++;
        }
    }

    return iCountEven - iCountOdd;
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int *p = NULL;
    int iRet = 0;

    printf("Enter number of elements : \n");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements : \n", iSize);

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : \n", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Frequency(p, iSize);

    printf("Result is : %d\n", iRet);

    free(p);

    return 0;
}