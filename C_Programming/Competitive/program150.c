////    Singly Linear Linked List. Display only even numbers

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

void DisplayEven(PNODE head)
{
    while (head != NULL)
    {
        if (head->data % 2 == 0)
        {
            printf("%d\n",head->data);
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

    InsertLast(&head, 45);
    InsertLast(&head, 34);
    InsertLast(&head, 67);
    InsertLast(&head, 88);
    InsertLast(&head, 97);
    InsertLast(&head, 102);

    Display(head);

    printf("Even elements are : \n");

    DisplayEven(head);

    return 0;
}