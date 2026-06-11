//  Write a program to count total number of factors of a given number.

class program24
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.countFactors(20);
    }
}

class Logic
{
    void countFactors(int iNum)
    {
        int iCnt = 0;
        int iCount = 0;

        for (iCnt = 1; iCnt <= iNum/2; iCnt++)
        {
            if (iNum % iCnt == 0)
            {
                iCount++;
            }
        }

        System.out.println("Count of all factors is : " + iCount);
    }
}