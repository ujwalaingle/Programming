////    Write a program which accepts a number and a position from the user and check whether
////    the bit at that position is ON or OFF. If bit is one, return TRUE otherwise return FALSE.
////    Input : 10      2
////    Output : TRUE 

import java.util.*;

class program31
{
    public static void main(String A[])
    {
        Scanner sobj1 = new Scanner(System.in);
        Scanner sobj2 = new Scanner(System.in);
        int iValue = 0;
        int iLoc = 0;
        boolean bRet = false;

        System.out.println("Enter number : ");
        iValue = sobj1.nextInt();

        System.out.println("Enter position : ");
        iLoc = sobj2.nextInt();

        Bitwise bobj = new Bitwise();
        bRet = bobj.ChkBit(iValue, iLoc);

        if (bRet = true)
        {
            System.out.println("Bit is ON.");
        }
        else
        {
            System.out.println("Bit is OFF.");
        }

        sobj1.close();
        sobj2.close();
    }
}

class Bitwise
{
    boolean ChkBit(int iNo, int iPos)
    {
        int iMask = 0x1;
        int iAns = 0;
        boolean bResult = false;

        iMask = iMask << (iPos - 1);

        iAns = iMask & iNo;

        if (iAns == iMask)
        {
            bResult =  true;
        }

        return bResult;
    }
}