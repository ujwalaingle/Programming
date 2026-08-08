//  Write a java program to accept directory name from user and write names of all files from that directory into one newly 
//  created file as "Marvellous.txt"

import java.io.*;
import java.util.*;

class program52
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String DirectoryName = null;

        System.out.println("Enter name of the directory to copy file names from: ");
        DirectoryName = sobj.nextLine();

        File dobj = new File(DirectoryName);

        try
        {
            if (dobj.exists() && dobj.isDirectory())
            {
                System.out.println("Directory exists");

                File fobjPack = new File("Marvellous.txt");
                fobjPack.createNewFile();

                File fArr[] = dobj.listFiles();

                System.out.println("Number of files in directory: " + fArr.length);

                FileOutputStream foobj = new FileOutputStream(fobjPack);

                for (int i = 0; i < fArr.length; i++)
                {
                    if (fArr[i].isFile())
                    {
                        String FileName = fArr[i].getName();

                        foobj.write(FileName.getBytes());
                        foobj.write("\n".getBytes());
                    }
                }
                System.out.println("Number of file names added successfully: " + fArr.length);

                foobj.close();
            }
            else
            {
                System.out.println("There is no such directory");
            }
        }
        catch(IOException iobj)
        {
            System.out.println(iobj);
        }

        sobj.close();
    }
}