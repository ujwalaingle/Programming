////    Singly Linear Linked List: Count nodes containing even values.

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

int CountEven(PNODE first)
{
    int iCountEven = 0;

    while (first != NULL)
    {
        if ((first->data) % 2 == 0)
        {
            iCountEven++;
        }
        first = first->next;
    }

    return iCountEven;
}

void InsertFirst(PPNODE first, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE) malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if (*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->next = *first;
        *first = newn;
    }
}

void Display(PNODE first)
{
    while (first != NULL)
    {
        printf("| %d | -> ", first->data);
        first = first->next;
    }
    printf("NULL\n");
}

int main()
{
    PNODE head = NULL;
    int iCount = 0;

    InsertFirst(&head, 43);
    InsertFirst(&head, 56);
    InsertFirst(&head, 87);
    InsertFirst(&head, 32);
    InsertFirst(&head, 40);

    Display(head);

    iCount = CountEven(head);
    printf("Number of nodes containing even value : %d\n", iCount);

    return 0;
}