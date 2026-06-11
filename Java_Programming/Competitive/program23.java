//  Write a program to display all factors of a given number.

class program23
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.displayFactors(12);
    }
}

class Logic
{
    void displayFactors(int iNum)
    {
        int iCnt = 0;

        for (iCnt = 2; iCnt <= iNum/2; iCnt++)
        {
            if (iNum % iCnt == 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}