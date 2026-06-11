//  Write a program to display the grade of a student based on marks.

class program12
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.displayGrade(82);
    }
}

class Logic
{
    void displayGrade(int iMarks)
    {
        if (iMarks >= 90 && iMarks <= 100)
        {
            System.out.println("Grade A");
        }
        else if (iMarks >= 80 && iMarks < 90)
        {
            System.out.println("Grade B");
        }
        else if (iMarks >= 70 && iMarks < 80)
        {
            System.out.println("Grade C");
        }
        else if (iMarks >= 60 && iMarks < 70)
        {
            System.out.println("Grade D");
        }
        else
        {
            System.out.println("Grade F");
        }
    }
}