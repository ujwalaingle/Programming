//// Accept N numbers from user and accept range, display all elements of that range.

//// Input : N : 6
//// Start : 60
//// End : 90
//// Elements : 85 66 3 76 93 88
//// Output : 85 66 76 88

//// Input : N : 6
//// Start : 30
//// End : 50
//// Elements : 85 66 3 76 93 88
//// Output : 


#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iSize, int iStart, int iEnd)
{
    int iCnt = 0;
    int iFlag = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] >= iStart && Arr[iCnt] <= iEnd)
        {
            printf("%d\t", Arr[iCnt]);
            iFlag = 1;
        }
    }

    if (iFlag == 0)
    {
        printf(" ");
    }
}

int main()
{
    int iSize = 0;
    int iValue1 = 0;
    int iValue2 = 0;
    int iCnt = 0;
    int *p = NULL;
    int iRet = 0;

    printf("Enter number of elements : \n");
    scanf("%d", &iSize);

    printf("Enter the starting point : \n");
    scanf("%d", &iValue1);

    printf("Enter the ending point : \n");
    scanf("%d", &iValue2);

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

    Range(p, iSize, iValue1, iValue2);

    free(p);

    return 0;
}