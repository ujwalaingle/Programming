//// Accept N numbers from user and display all such numbers which contain more than 3 digits in it.

//// Input : N : 6
//// Elements : 8225  665  3   76  953  858
//// Output : 665   953 858

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int iCnt = 0;
    int iDigit = 0;
    int iCount = 0;
    int iNo = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        iNo = Arr[iCnt];
        iCount = 0;

        while (Arr[iCnt] != 0)
        {
            iDigit = Arr[iCnt] % 10;
            iCount++;
            Arr[iCnt] = Arr[iCnt] / 10;
        }

        if (iCount == 3)
        {
            printf("%d\t", iNo);
        }
    }
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int iRet = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements\n", iSize);

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element : %d\n", iCnt);
        scanf("%d", &p[iCnt]);
    }

    Digits(p, iSize);

    free(p);

    return 0;
}