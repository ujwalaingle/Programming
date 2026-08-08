// Write a java program to accept a file name from the user and open that file

import java.io.*;
import java.util.*;

class program41
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String FileName = null;

        System.out.println("Enter the file name: ");
        FileName = sobj.nextLine();

        try
        {
            File fobj = new File(FileName);

            if (fobj.exists())
            {
                FileInputStream fiobj = new FileInputStream(fobj);
                System.out.println("File " + FileName + " is opened");

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