////    Accept a division of student from user and depending on the division, display the exmam timing.
////    There are 4 divisions in school as A,B,C,D. Exam of division A is at 7 AM,
////    B at 8.30 AM, C at 9.20 AM and D at 10.30 AM
////    (Application should be case insensitive)

#include<stdio.h>

void DisplaySchedule(char ch)
{
    if (ch == 'A' || ch == 'a')
    {
        printf("Your exam is at : 7 AM\n");
    }
    else if (ch == 'B' || ch == 'b')
    {
        printf("Your exam is at : 8.30 AM\n");
    }
    else if (ch == 'C' || ch == 'c')
    {
        printf("Your exam is at : 9.20 AM\n");
    }
    else if (ch == 'D' || ch == 'd')
    {
        printf("Your exam is at : 10.30 AM\n");
    }
    else
    {
        printf("Invalid division\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your division : \n");
    scanf("%c", &cValue);

    DisplaySchedule(cValue);

    return 0;
}