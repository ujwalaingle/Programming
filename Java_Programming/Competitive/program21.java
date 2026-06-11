//  Write a program to calculate the product of the digits of a number.

class program21
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.productOfDigits(234);
    }
}

class Logic
{
    void productOfDigits(int iNum)
    {
        int iCnt = 0;
        int iDigit = 0;
        int iProd = 1;

        while (iNum > 0)
        {
            iDigit = iNum % 10;
            iProd = iProd * iDigit;
            iNum = iNum / 10;
        }

        System.out.println("Product of digits is : " + iProd);
    }
}