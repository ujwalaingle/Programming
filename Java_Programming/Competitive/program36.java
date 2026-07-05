////    Write a program which accepts a number from the user and count number of ON (1) bits in it
///     withou using % and / operator.
///     Input :     11
///     Output :    3

import java.util.*;

class program36
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;
        int iRet = 0;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        Bitwise bobj = new Bitwise();
        iRet = bobj.CountOne(iValue);

        System.out.println("Count of ON bits : " + iRet);

        sobj.close();
    }
}

class Bitwise
{
    int CountOne(int iNo)
    {
        int iCount = 0;

        while (iNo != 0)
        {
            if ((iNo & 1) == 1)
            {
                iCount++;
            }
            iNo = iNo >> 1;
        }

        return iCount;
    }
}