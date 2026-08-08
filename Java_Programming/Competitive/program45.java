//  Write a java program to accept directory name from the user and display all names of files from that directory

import java.io.*;
import java.util.*;

class program45
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String DirectoryName = null;

        System.out.println("Enter directory name");
        DirectoryName = sobj.nextLine();

        File dobj = new File(DirectoryName);

        if (dobj.exists() && dobj.isDirectory())
        {
            System.out.println("Files in the directory are : ");
            File fArr[] = dobj.listFiles();
            System.out.println("Number of files in folder are : " + fArr.length);
            for (int i = 0; i < fArr.length; i++)
            {
                System.out.println("File Name : " + fArr[i].getName());
            }
        }
        else
        {
            System.out.println("There is no such directory");
        }

        sobj.close();
    }
}