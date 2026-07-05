////    Write a program which accepts a number from user and toggle 7th bit of that number.
///     Return modified number.
///     Input : 137
///     Output : 201

import java.util.*;

class program28
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;
        int iRet = 0;

        System.out.println("Enter a number : ");
        iValue = sobj.nextInt();

        Bitwise bobj = new Bitwise();

        iRet = bobj.ToggleBit(iValue);

        System.out.println("Modified number is : " + iRet);

        sobj.close();
    }
}

class Bitwise
{
    int ToggleBit(int iNo)
    {
        int iMask = 0x40;

        return (iNo ^ iMask);
    }
}