////    Write a program which accepts a number and a position from the user and ON the bit at that position. 
///     Return the modified number.
////    Input : 10      3
////    Output : 14

import java.util.*;

class program33
{
    public static void main(String A[])
    {
        Scanner sobj1 = new Scanner(System.in);
        Scanner sobj2 = new Scanner(System.in);
        int iValue = 0;
        int iLoc = 0;
        int iRet = 0;

        System.out.println("Enter number : ");
        iValue = sobj1.nextInt();

        System.out.println("Enter position : ");
        iLoc = sobj2.nextInt();

        Bitwise bobj = new Bitwise();
        iRet = bobj.OnBit(iValue, iLoc);

        System.out.println("Modified number is : " + iRet);

        sobj1.close();
        sobj2.close();
    }
}

class Bitwise
{
    int OnBit(int iNo, int iPos)
    {
        int iMask = 0x1;

        iMask = iMask << (iPos - 1);

        return (iNo | iMask);
    }
}