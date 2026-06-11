//  Write a program to check whether the number is prime or not

class program6
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.checkPrime(11);
    }
}

class Logic
{
    void checkPrime(int iNo)
    {
        int iCnt = 0;
        boolean bFlag = false;

        for (iCnt = 2; iCnt < iNo; iCnt++)
        {
            if (iNo % iCnt == 0)
            {
                bFlag = true;                        // factor exists
                break;
            }
        }

        if (bFlag == true)
        {
            System.out.println("Number is not Prime");
        }
        else
        {
            System.out.println("Number is Pime");
        }
    }
}