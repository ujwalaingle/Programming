////    Singly Linear Linked List : Display only odd elements.

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

void DisplayOdd(PNODE head)
{
    printf("Odd elements are : \n");
    while (head != NULL)
    {
        if (head->data % 2 != 0)
        {
            printf("%d\n", head->data);
        }
        head = head->next;
    }
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

    InsertLast(&head, 67);
    InsertLast(&head, 58);
    InsertLast(&head, 99);
    InsertLast(&head, 112);
    InsertLast(&head, 151);

    Display(head);

    DisplayOdd(head);

    return 0;
}