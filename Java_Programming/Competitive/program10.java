//  Write a program to check whether the number is positive, negative or zero

class program10
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.checkSign(-8);
    }
}

class Logic
{
    void checkSign(int iNo)
    {
        if (iNo > 0)
        {
            System.out.println("Number is positive");
        }
        else if (iNo < 0)
        {
            System.out.println("Number is negative");
        }
        else
        {
            System.out.println("Number is zero");
        }
    }
}