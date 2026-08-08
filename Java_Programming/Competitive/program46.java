//  Write a java program to accept two file names from user, open first file and create a new file (Second name)
//  and copy the data from the first file into the newly create file

import java.io.*;
import java.util.*;

class program46
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String FileNameSrc = null;
        String FileNameDest = null;
        byte Buffer[] = new byte[50];
        int iRet = 0;

        System.out.println("Enter source file name : ");
        FileNameSrc = sobj.nextLine();

        System.out.println("Enter destination file name : ");
        FileNameDest = sobj.nextLine();

        try
        {
            File fobjsrc = new File(FileNameSrc);
            
            if (fobjsrc.exists())
            {
                FileInputStream fiobj = new FileInputStream(fobjsrc);
                FileOutputStream foobj = new FileOutputStream(FileNameDest);

                while ((iRet = fiobj.read(Buffer)) != -1)
                {
                    foobj.write(Buffer, 0, iRet);
                }

                fiobj.close();
                foobj.close();

                System.out.println("Data succesfully copied from '" + FileNameSrc + "' to '" + FileNameDest);
            }
            else
            {
                System.out.println("Source file does not exist");
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