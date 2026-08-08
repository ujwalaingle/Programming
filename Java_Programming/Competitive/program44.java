// Write a java program to accept file name from the user and create a new file of that name if it is not existing

import java.io.*;
import java.util.*;

class program44
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String FileName = null;

        System.out.println("Enter file name: ");
        FileName = sobj.nextLine();

        File fobj = new File(FileName);

        try
        {
            if (fobj.exists())
            {
                System.out.println("File already exists");
            }
            else
            {
                fobj.createNewFile();
                System.out.println("File created successfully");
            }
        }
        catch (IOException iobj)
        {
            System.out.println(iobj);
        }

       sobj.close();
    }
}