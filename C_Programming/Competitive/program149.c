////    Singly Linear Linked List : Count how many times a number appears

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

int Frequency(PNODE head, int No)
{
    int iCnt = 0;

    while (head != NULL)
    {
        if (head->data == No)
        {
            iCnt++;
        }
        head = head->next;
    }
    return iCnt;
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
    int iValue = 0;

    InsertFirst(&head, 54);
    InsertFirst(&head, 121);
    InsertFirst(&head, 43);
    InsertFirst(&head, 121);
    InsertFirst(&head, 121);
    InsertFirst(&head, 32);

    Display(head);

    printf("Enter a number : \n");
    scanf("%d", &iValue);

    iCount = Frequency(head, iValue);
    printf("Frequency is : %d\n", iCount);

    return 0;
}