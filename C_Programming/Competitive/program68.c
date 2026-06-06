//// Accept N numbers from user and accept one another number as NO and return the index of last occurence of that number.

//// Input : N : 6
//// NO : 66
//// Elements : 85 66 3 66 93 88
//// Output : 3

//// Input : N : 6
//// NO : 12
//// Elements : 85 11 3 15 11 111
//// Output : -1


#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;

    for (iCnt = iSize; iCnt >= 0; iCnt--)
    {
        if (Arr[iCnt] == iNo)
        {
            return iCnt;
        }
    }

    return -1;
}

int main()
{
    int iSize = 0;
    int iValue = 0;
    int iCnt = 0;
    int *p = NULL;
    int iRet = 0;

    printf("Enter number of elements : \n");
    scanf("%d", &iSize);

    printf("Enter the number : \n");
    scanf("%d", &iValue);

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

    iRet = LastOcc(p, iSize, iValue);

    if (iRet == -1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("Last occurence of number is : %d", iRet);
    }

    free(p);

    return 0;
}