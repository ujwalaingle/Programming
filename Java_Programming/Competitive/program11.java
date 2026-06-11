//  Write a program to check whether a given year is a leap year not

class program11
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.checkLeapYear(2024);
    }
}

class Logic
{
    void checkLeapYear(int iYear)
    {
        if ((iYear % 400 == 0) || ((iYear % 4 == 0) && (iYear % 100 != 0)))
        {
            System.out.println("Leap year");
        }
        else
        {
            System.out.println("Not a leap year");
        }
    }
}