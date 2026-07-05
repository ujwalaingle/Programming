////    Write a program which accepts a number from the user and 
//      check whether 9th or 12th bit is ON or OFF.
///     Input :     257
///     Output :    TRUE

import java.util.*;

class program38
{
    public static void main(String A[])
    {
        Scanner sobj1 = new Scanner(System.in);
        Scanner sobj2 = new Scanner(System.in);
        int iValue = 0;
        boolean bRet = false;

        System.out.println("Enter number : ");
        iValue = sobj1.nextInt();

        Bitwise bobj = new Bitwise();
        bRet = bobj.ChkBit(iValue);

        if (bRet == true)
        {
            System.out.println("Either of 9th and 12th bit is ON.");
        }
        else
        {
            System.out.println("Either of 9th and 12th bit is OFF.");
        }

        sobj1.close();
        sobj2.close();
    }
}

class Bitwise
{
    boolean ChkBit(int iNo)
    {
        int iMask1 = 0x100;
        int iMask2 = 0x800;
        int iResult1 = 0;
        int iResult2 = 0;

        iResult1 = iNo & iMask1;
        iResult2 = iNo & iMask2;

        if ((iResult1 != 0) || (iResult2 != 0))
        {
            return true;
        }
        return false;
    }
}