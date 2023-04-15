import java.io.*;


class CreateFile
{
    public static void main(String arg[]) throws Exception
    {
        File fobj = new File("Demo.txt");

        if(fobj.createNewFile())
        {
            System.out.println("file created sucessfully");
        }
        else
        {
            System.out.println("Uable to create the file");
        }
    }
}