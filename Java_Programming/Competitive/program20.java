//  Write a program to find the smallest digit in a given number.

class program20
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.findLargestDigit(45872);
    }
}

class Logic
{
    void findLargestDigit(int iNum)
    {
        int iCnt = 0;
        int iDigit = 0;
        int iMin = 9;

        while (iNum != 0)
        {
            iDigit = iNum % 10;

            if (iDigit < iMin)
            {
                iMin = iDigit;
            }
            iNum = iNum / 10;
        }

        System.out.println("Smallest digit is : " + iMin);
    }
}