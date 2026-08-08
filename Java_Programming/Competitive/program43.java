//  Write a java program to accept file name from user and open that file in write mode and write some data at the end of the file

import java.io.*;
import java.util.*;

class program43
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String FileName = null;
        String Data = null;

        System.out.println("Enter the file name: ");
        FileName = sobj.nextLine();

        System.out.println("Enter data to write at the end of the file: ");
        Data = sobj.nextLine();

        try
        {
            File fobj = new File(FileName);

            if (fobj.exists())
            {
                FileOutputStream foobj = new FileOutputStream(fobj, true);
                
                byte Buffer[] = Data.getBytes();

                foobj.write(Buffer);

                foobj.close();
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