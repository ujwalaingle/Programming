//  Write a program to find the maximum of two numbers

class program3
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.findMax(20, 15);
    }
}

class Logic
{
    void findMax(int a, int b)
    {
        if (a > b)
        {
            System.out.println("Maximum is : " + a);
        }
        else
        {
            System.out.println("Maximum is : " + b);
        }
    }
}