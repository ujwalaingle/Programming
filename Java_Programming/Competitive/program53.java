//  Write a java program to accept a directory name from user and write data of all files into one newly created file 
//  named as "Marvellous.txt"

import java.io.*;
import java.util.*;

class program53
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
                        FileInputStream fiobj = new FileInputStream(fArr[i]);

                        byte Buffer[] = new byte[50];
                        int iRet = 0;

                        while ((iRet = fiobj.read(Buffer)) != -1)
                        {
                            foobj.write(Buffer,0, iRet);
                        }
                        fiobj.close();
                    }
                }
                System.out.println("Added " + fArr.length + " files' data successfully" );

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