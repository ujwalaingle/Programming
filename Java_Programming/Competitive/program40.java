////    Write a program which accepts a number from the user and a range of positions from user.
//      Toggle all bits from that range.
///     Input :     897     9      13
///     Toggle all bits from position 9 to 13.
///     Output :    7297

import java.util.*;

class program40
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;
        int iLoc1 = 0;
        int iLoc2 = 0;
        int iRet = 0;

        System.out.println("Enter a number : ");
        iValue = sobj.nextInt();

        System.out.println("Enter start of the range : ");
        iLoc1 = sobj.nextInt();

        System.out.println("Enter end of the range : ");
        iLoc2 = sobj.nextInt();

        Bitwise bobj = new Bitwise();

        iRet = bobj.ToggleBitRange(iValue, iLoc1, iLoc2);

        System.out.println("Updated number is : " + iRet);

        sobj.close();
    }
}

class Bitwise
{
    int ToggleBitRange(int iNo, int iPos1, int iPos2)
    {
        int iMask = 0x0;
        int i = 0;

        for (i = iPos1; i <= iPos2; i++)
        {
            iMask = iMask | (0x1 << (i -1));
        }

        return iNo ^ iMask;
    }
}