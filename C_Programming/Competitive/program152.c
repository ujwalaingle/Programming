////    Singly Linear Linked List: Return position of first occurence

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

int FirstOccur(PNODE head, int iNo)
{
    int iCnt = 1;

    while (head != NULL)
    {
        if (head->data == iNo)
        {
           break; 
        }
        iCnt++;
        head = head->next;
    }
    return iCnt;
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

    int iValue = 0;
    int iRet = 0;

    InsertLast(&head,45);
    InsertLast(&head,64);
    InsertLast(&head,32);
    InsertLast(&head,21);
    InsertLast(&head,45);
    InsertLast(&head,67);
    InsertLast(&head,64);

    Display(head);
    
    printf("Enter a number to find it's first occurence : \n");
    scanf("%d", &iValue);

    iRet = FirstOccur(head, iValue);
    printf("Position of first occurence is : %d\n", iRet);

    return 0;
}