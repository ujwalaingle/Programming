//  Write a program to check whether a number is a perfect number or not.

class program18
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.checkPerfect(6);
    }
}

class Logic
{
    void checkPerfect(int iNum)
    {
        int iCnt = 0;
        int iSum = 0;

        for (iCnt = 1; iCnt <= iNum/2; iCnt++)
        {
            if (iNum % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }
        }

        if (iSum == iNum)
        {
            System.out.println("Number is a perfect number");
        }
        else
        {
            System.out.println("Number is not a perfect number");
        }
    }
}