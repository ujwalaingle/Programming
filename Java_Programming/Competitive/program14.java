//  Write a program to print each digit of a number separately.

class program14
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.printDigits(9876);
    }
}

class Logic
{
    void printDigits(int iNum)
    {
        int iCnt = 0;
        int iDigit = 0;

        while (iNum != 0)
        {
            iDigit = iNum % 10;
            System.out.println(iDigit);
            iNum = iNum / 10;
        }
    }
}