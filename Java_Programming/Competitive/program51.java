//  Write a java program to accept a directory name from user and display all names of files from that directory which are regular files

import java.io.*;
import java.util.*;

class program51
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String DirectoryName = null;

        System.out.println("Enter name of the directory: ");
        DirectoryName = sobj.nextLine();

        File dobj = new File(DirectoryName);

        try
        {
            if (dobj.exists() && dobj.isDirectory())
            {
                File fArr[] = dobj.listFiles();
                System.out.println("Number of files in directory: " + fArr.length);
                System.out.println("Names of regular files are: ");
                for (int i = 0; i < fArr.length; i++)
                {
                    if (fArr[i].isFile())
                    {
                        System.out.println(fArr[i].getName());
                    }
                }
            }
            else
            {
                System.out.println("There is no such directory");
            }
        }
        catch(Exception eobj)
        {
            System.out.println(eobj);
        }

        sobj.close();
    }
}