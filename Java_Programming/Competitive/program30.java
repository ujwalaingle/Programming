////    Write a program which accepts a number from user and ON its first 4 bits.
////    Return the modified number.
////    Input : 73
////    Output : 79

import java.util.*;

class program30
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;
        int iRet = 0;

        System.out.println("Enter a number : ");
        iValue = sobj.nextInt();

        Bitwise bobj = new Bitwise();

        iRet = bobj.OnBit(iValue);

        System.out.println("Modified number is : " + iRet);

        sobj.close();
    }
}

class Bitwise
{
    int OnBit(int iNo)
    {
        int iMask = 0xF;

        return (iNo | iMask);
    }
}