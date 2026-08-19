////    Singly Linear Linked List : Check whether a number is present

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

#define TRUE 1
#define FALSE 0

typedef int bool;

bool Search(PNODE first, int No)
{
    bool bNumFound = FALSE;

    while (first != NULL)
    {
        if (first->data == No)
        {
            bNumFound = TRUE;
        }
        first = first->next;
    }
    return bNumFound;
}

void Display(PNODE first)
{
    while (first != NULL)
    {
        printf(" | %d | -> ", first->data);
        first = first->next;
    }
    printf("NULL\n");
}

int Count(PNODE first)
{
    int iCount = 0;

    while (first != NULL)
    {
        iCount++;
        first = first->next;
    }

    return iCount;
}

void InsertLast(PPNODE first, int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE) malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if (*first == NULL)
    {
        *first = newn;
    }
    else
    {
        temp = *first;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
    }
}

int main()
{
    PNODE head = NULL;
    int iValue = 0;
    bool bRet = FALSE;

    InsertLast(&head, 17);
    InsertLast(&head, 21);
    InsertLast(&head, 34);
    InsertLast(&head, 45);
    InsertLast(&head, 56);

    Display(head);

    printf("Enter a number to search : \n");
    scanf("%d", &iValue);

    bRet = Search(head, iValue);

    if (bRet == TRUE)
    {
        printf("Number exists in the Linked List\n");
    }
    else
    {
        printf("Number does not exist in the Linked List\n");
    }

    

    return 0;
}