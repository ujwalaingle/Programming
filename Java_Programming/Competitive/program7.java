//  Write a program to print all even numbers upto N

class program7
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.printEvenNumbers(20);
    }
}

class Logic
{
    void printEvenNumbers(int iNo)
    {
        int iCnt = 0;

        for (iCnt = 0; iCnt <= iNo; iCnt++)
        {
            if (iCnt % 2 == 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}