////    Write a program which accepts a number from user and OFF the 7th and 10th bit of that number if it is ON.
///     Return modified number.
///     Input : 577
///     Output : 1

import java.util.*;

class program27
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;
        int iRet = 0;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        Bitwise bobj = new Bitwise();

        iRet = bobj.OffBit(iValue);

        System.out.println("Modified number is : " + iRet);

        sobj.close();
    }
}

class Bitwise
{
    int OffBit(int iNo)
    {
        int iMask = 0x240;

        return (iNo ^ iMask);
    }
}