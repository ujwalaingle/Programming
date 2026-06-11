//  Write a program to calculate the power of a number using loops.

class program15
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.calculatePower(2,5);
    }
}

class Logic
{
    void calculatePower(int iBase, int iExp)
    {
        int iCnt = 1;
        int iResult = 1;

        while (iCnt <= iExp)
        {
            iResult = iResult * iBase;
            iCnt++;
        }

        System.out.println("Result is : " + iResult);
    }
}