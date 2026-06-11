//   Write a program to print the multiplication table of a number

class program5
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.printTable(5);
    }
}

class Logic
{
    void printTable(int iNo)
    {
        int iCnt = 0;
        int iProduct = 0;

        for (iCnt = 1; iCnt <= 12; iCnt++)
        {
            iProduct = iNo * iCnt;
            System.out.println(iProduct);
        }
    }
}