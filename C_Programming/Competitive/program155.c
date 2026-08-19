////    Singly Linear Linked List: Count elements less than the given number

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

int CountLess(PNODE head, int X)
{
    int iCount = 0;

    while (head != NULL)
    {
        if (head->data < X)
        {
            iCount++;
        }
        head = head->next;
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

    int iRet = 0;
    int iValue = 0;

    InsertLast(&head, 23);
    InsertLast(&head, 14);
    InsertLast(&head, 43);
    InsertLast(&head, 65);
    InsertLast(&head, 78);

    Display(head);

    printf("Enter a number : \n");
    scanf("%d", &iValue);

    iRet = CountLess(head, iValue);
    printf("Number of elements less than given number : %d\n", iRet);

    return 0;
}