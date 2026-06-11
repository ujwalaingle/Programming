//  Write a program to check whether the number is divisible by 5 and 11 or not.

class program13
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.checkDivisible(55);
    }
}

class Logic
{
    void checkDivisible(int iNum)
    {
        boolean bFlag = false;

        if ((iNum % 5 == 0) && (iNum % 11 == 0))
        {
            bFlag = true;
        }

        if (bFlag == true)
        {
            System.out.println("Number is divisible by 5 and 11");
        }
        else
        {
            System.out.println("Number is not divisible by 5 and 11");
        }
    }
}