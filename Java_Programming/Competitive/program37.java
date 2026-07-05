////    Write a program which accepts two numbers from the user and 
//      display position of common on bits from that two numbers.
///     Input :     10      15
///     Output :    2       4

import java.util.*;

class program38
{
    public static void main(String A[])
    {
        Scanner sobj1 = new Scanner(System.in);
        Scanner sobj2 = new Scanner(System.in);
        int iValue1 = 0;
        int iValue2 = 0;

        System.out.println("Enter number : ");
        iValue1 = sobj1.nextInt();

        System.out.println("Enter number : ");
        iValue2 = sobj2.nextInt();

        Bitwise bobj = new Bitwise();

        System.out.println("Common bits are : ");
        bobj.CommonBits(iValue1, iValue2);

        sobj1.close();
        sobj2.close();
    }
}

class Bitwise
{
    void CommonBits(int iNo1, int iNo2)
    {
        int iResult = iNo1 & iNo2;
        int iPos = 1;

        while (iResult != 0)
        {
            if ((iResult & 1) == 1)
            {
                System.out.print(iPos + "   ");
            }
            iResult = iResult >> 1;
            iPos++;
        }
    }
}