//  Write a program to count how many even and odd numbers are present between 1 and N.

class program22
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.countEvenOddRange(50);
    }
}

class Logic
{
    void countEvenOddRange(int iNum)
    {
        int iCnt = 0;
        int iCountEven = 0;
        int iCountOdd = 0;

        for (iCnt = 1; iCnt <= iNum; iCnt++)
        {
            if (iCnt % 2 == 0)
            {
                iCountEven++;
            }
            else
            {
                iCountOdd++;
            }
        }

        System.out.println("Count of even numbers : " + iCountEven);
        System.out.println("Count of odd numbers : " + iCountOdd);
    }
}