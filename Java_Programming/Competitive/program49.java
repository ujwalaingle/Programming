//  Write a java program to accept file name from user and calculate checksum of that file and display on screen

import java.io.*;
import java.util.*;

class program49
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String FileName = null;
        int iRet = 0;
        int iSum = 0;
        byte Buffer[] = new byte[50];

        System.out.println("Enter file name: ");
        FileName = sobj.nextLine();

        File fobj = new File(FileName);

        try
        {
            if (fobj.exists() && fobj.isFile())
            {
                FileInputStream fiobj = new FileInputStream(fobj);

                while ((iRet = fiobj.read(Buffer)) != -1)
                {
                    for (int i = 0; i < iRet; i++)
                    {
                        iSum = iSum + Buffer[i];
                    }
                }

                fiobj.close();

                System.out.println("Checksum of the file is: " + iSum);
            }
            else
            {
                System.out.println("There is no such file");
            }
        }
        catch (FileNotFoundException eobj)
        {
            System.out.println(eobj);
        }
        catch (IOException iobj)
        {
            System.out.println(iobj);
        }

        sobj.close();
    }
}