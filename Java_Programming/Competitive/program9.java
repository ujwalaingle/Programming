//  Write a program to find the sum of even and odd digits separately in a number

class program9
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.sumEvenOddDigits(123456);
    }
}

class Logic 
{
    void sumEvenOddDigits(int iNo)
    {
        int iCnt = 0;
        int iDigit = 0;
        int iSumEven = 0;
        int iSumOdd = 0;

        while (iNo != 0)
        {
            iDigit = iNo % 10;

            if (iDigit % 2 == 0)
            {
                iSumEven = iSumEven + iDigit;
            }
            else
            {
                iSumOdd = iSumOdd + iDigit;
            }

            iNo = iNo / 10;
        }

        System.out.println("Sum of even digits is : " + iSumEven);
        System.out.println("Sum of odd digits is : " + iSumOdd);
    }
}