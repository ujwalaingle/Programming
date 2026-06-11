//  Write a program to print number from N down to 1 in reverse order.

class program17
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.printReverse(10);
    }
}

class Logic
{
    void printReverse(int iNum)
    {
        int iCnt = 0;

        for (iCnt = iNum; iCnt > 0; iCnt--)
        {
            System.out.println(iCnt);
        }
    }
}