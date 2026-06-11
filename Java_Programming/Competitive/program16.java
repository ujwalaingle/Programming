//  Write a program to find the sum of all even numbers upto N.

class program16
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.sumEvenNumbers(10);
    }
}

class Logic
{
    void sumEvenNumbers(int iNum)
    {
        int iCnt = 0;
        int iSum = 0;

        for (iCnt = 1; iCnt <= iNum; iCnt++)
        {
            if (iCnt % 2 == 0)
            {
                iSum = iSum + iCnt;
            }
        }

        System.out.println("Sum is : " + iSum);
    }
}