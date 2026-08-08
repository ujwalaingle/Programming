//  Write a java program to accept a directory name from user and create that directory

import java.io.*;
import java.util.*;

class program48
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String DirectoryName = null;

        System.out.println("Enter directory name: ");
        DirectoryName = sobj.nextLine();

        File fobj = new File(DirectoryName);

        try
        {
            if (fobj.exists() && fobj.isDirectory())
            {
                System.out.println("Directory already exists");
            }
            else
            {
                fobj.mkdir();
                System.out.println("Directory created successfully");
            }
        }
        catch(Exception eobj)
        {
            System.out.println(eobj);
        }

        sobj.close();
    }
}