//  Write a program to find the largest digit in a given number.

class program19
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.findLargestDigit(83429);
    }
}

class Logic
{
    void findLargestDigit(int iNum)
    {
        int iCnt = 0;
        int iDigit = 0;
        int iMax = 0;

        while (iNum != 0)
        {
            iDigit = iNum % 10;

            if (iDigit > iMax)
            {
                iMax  = iDigit;
            }
            iNum = iNum / 10;
        }

        System.out.println("Largest digit is : " + iMax);
    }
}