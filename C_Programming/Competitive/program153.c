////    Singly Linear Linked List: Return position of last occurence

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

int LastOccur(PNODE head, int iNo)
{

    int iFirstPos = 1;
    int iLastPos = 0;

    if (head == NULL)
    {
        printf("Linked List is empty.");
        return -1;
    }

    while (head != NULL)
    {
        if (head->data == iNo)
        {
            iLastPos = iFirstPos;
        }
        iFirstPos++;
        head = head->next;
    }
    
    return iLastPos;
    
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

    InsertLast(&head,45);
    InsertLast(&head,64);
    InsertLast(&head,32);
    InsertLast(&head,21);
    InsertLast(&head,45);
    InsertLast(&head,67);
    InsertLast(&head,64);

    Display(head);

    printf("Enter a number to find it's last occurence : \n");
    scanf("%d", &iValue);

    iRet = LastOccur(head, iValue);
    printf("Position of last occurence of number is : %d\n", iRet);

    return 0;
}