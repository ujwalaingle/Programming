//  Write a program to find the sum of digits of a number

class program1
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.sumOfDigits(1234);
    }
}

class Logic
{
    public void sumOfDigits(int iNo)
    {
        int iDigit = 0;
        int iSum = 0;

        while (iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }

        System.out.println("Sum of digits is : " + iSum);
    }
}