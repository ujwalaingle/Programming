//  Write a java program to accept directory name from user and display all names of files from that directory and size of each file on screen

import java.io.*;
import java.util.*;

class program50
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String DirectoryName = null;

        System.out.println("Enter directory name: ");
        DirectoryName = sobj.nextLine();

        File dobj = new File(DirectoryName);

        try
        {
            if (dobj.exists() && dobj.isDirectory())
            {
                System.out.println("Files in the directory are: ");
                File fArr[] = dobj.listFiles();
                
                for (int i = 0; i < fArr.length; i++)
                {
                    if (fArr[i].isFile())
                    {
                        System.out.println("File Name : " + fArr[i].getName());
                        System.out.println("File Size : " + fArr[i].length() + " bytes");
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