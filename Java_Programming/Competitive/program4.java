//  Write a program to find the minimum of three numbers

class program4
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.findMin(3,7,2);
    }
}

class Logic
{
    void findMin(int a, int b, int c)
    {
        if ((a < b) && (a < c))
        {
            System.out.println("Minimum is : " + a);
        }
        else if ((b < a) && (b < c))
        {
            System.out.println("Minimum is : " + b);
        }
        else 
        {
            System.out.println("Minimum is : " + c);
        }
    }
}