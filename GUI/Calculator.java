import javax.swing.*;
import java.awt.event.*;

class Calculator1
{
   public JFrame mainframe;

   public Calculator1(int width, int height, String Tittle)
   {
     mainframe = new JFrame(title);
     mainframe.setSize(width,height);
     mainframe.setVisible(true);


   }
}
class Calculator
{
    public static void main(String a[])
    {
        Calculator1 cobj = new Calculator1(400,400,"marvellous calculator");

    }
}