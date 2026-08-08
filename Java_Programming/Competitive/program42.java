//  Write a java program to accept file name from user and open that file and display the contents on the screen

import java.io.*;
import java.util.*;

class program42
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String FileName = null;
        int iRet = 0;

        System.out.println("Enter the file name: ");
        FileName = sobj.nextLine();

        try
        {
            File fobj = new File(FileName);
            

            if (fobj.exists())
            {
                FileInputStream fiobj = new FileInputStream(fobj);

                byte Buffer[] = new byte[50];

                String str = null;

                while ((iRet = fiobj.read(Buffer)) != -1)
                {
                    str = new String(Buffer, 0, iRet);
                    System.out.println(str);
                    str = null;
                }

                fiobj.close();
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