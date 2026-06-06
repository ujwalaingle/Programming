//// Accept N numbers from user and check whether the numbers contain 11 or not.

//// Input : N : 6
//// Elements : 85 66 11 80 93 88
//// Output : 11 is present

//// Input : N : 6
//// Elements : 85 66 3 80 93 88
//// Output : 11 is notpresent


#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Frequency(int Arr[], int iSize)
{
    int iCnt = 0;
    BOOL bFlag = FALSE;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] == 11)
        {
            bFlag = TRUE;
            break;
        }
    }

    return bFlag;
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

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
        printf("Enter %d element : \n", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    bRet = Frequency(p, iSize);

    if (bRet == TRUE)
    {
        printf("11 is present\n");
    }
    else
    {
        printf("11 is not present\n");
    }

    free(p);

    return 0;
}