////    Write a program which accepts a number and a position from the user and toggle the contents of first and 
///     last nibble of the number.
///     Return the modified number. (Nibble is a group of 4 bits)

import java.util.*;

class program35
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;
        int iRet = 0;

        System.out.println("Enter number : ");
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
        int iMask = 0xF000000F;

        return (iNo ^ iMask);
    }
}