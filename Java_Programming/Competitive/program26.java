////    Write a program which accepts a number form user and make the 7th bit OFF of that number if it is ON.
///     Return modified number.
///     Input : 79;
///     Output : 15

import java.util.*;

class program26
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
        int iMask = 0x40;
        
        return (iNo ^ iMask);
    }
}