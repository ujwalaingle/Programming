//  Write a program to print all the numbers from 1 to N that are divisible by both 2 and 3.

class program25
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.printDivisibleBy2and3(30);
    }
}

class Logic
{
    void printDivisibleBy2and3(int iNum)
    {
        int iCnt = 0;
        
        for (iCnt = 1; iCnt <= iNum; iCnt++)
        {
            if ((iCnt % 2 == 0) && (iCnt % 3 == 0))
            {
                System.out.println(iCnt);
            }
        }
    }
}