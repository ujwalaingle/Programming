////    Write a program which accepts a number and two positions from the user and 
//      check whether bit at first or second position is ON or OFF.
///     Input :     257
///     Output :    FALSE

import java.util.*;

class program39
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;
        int iLoc1 = 0;
        int iLoc2 = 0;
        boolean bRet = false;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        System.out.println("Enter position 1 : ");
        iLoc1 = sobj.nextInt();

        System.out.println("Enter position 2 : ");
        iLoc2 = sobj.nextInt();

        Bitwise bobj = new Bitwise();
        bRet = bobj.ChkBit(iValue, iLoc1, iLoc2);

        if (bRet == true)
        {
            System.out.println("Either of the 2 bits is ON.");
        }
        else
        {
            System.out.println("Either of the 2 bits is OFF.");
        }

        sobj.close();
    }
}

class Bitwise
{
    boolean ChkBit(int iNo, int iPos1, int iPos2)
    {
        int iMask1 = 0x1;
        int iMask2 = 0x1;
        int iResult1 = 0;
        int iResult2 = 0;

        iMask1 = iMask1 << (iPos1 - 1);
        iMask2 = iMask2 << (iPos2 - 1);

        iResult1 = iNo & iMask1;
        iResult2 = iNo & iMask2;

        if ((iResult1 != 0) || (iResult2 != 0))
        {
            return true;
        }
        return false;
    }
}