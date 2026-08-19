////    Singly Linear Linked List : Count nodes containing odd values.

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

int CountOdd(PNODE first)
{
    int iCntOdd = 0;

    while (first != NULL)
    {
        if (first->data % 2 != 0)
        {
            iCntOdd++;
        }
        first = first->next;
    }
    return iCntOdd;
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

void Display(PNODE first)
{
    while (first != NULL)
    {
        printf(" | %d | -> ", first->data);
        first = first->next;
    }
    printf("NULL\n");
}

int main()
{
    PNODE head = NULL;
    int iCount = 0;

    InsertLast(&head, 56);
    InsertLast(&head, 43);
    InsertLast(&head, 77);
    InsertLast(&head, 22);
    InsertLast(&head, 95);
    InsertLast(&head, 102);
    InsertLast(&head, 111);

    Display(head);

    iCount = CountOdd(head);
    printf("Number of nodes containing odd value : %d\n", iCount);

    return 0;
}