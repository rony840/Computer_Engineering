import java.awt.*;
import java.awt.event.*;

import java.applet.*;

/*<applet code="MouseEvents" width=200 height=100> </applet>*/

public class MouseEvents extends Applet implements MouseListener, MouseMotionListener
{
   String msg="Mouse Clicked!";
   int mouseX=0, mouseY=0;
   public void init()
   {
     addMouseListener(this);
     addMouseMotionListener(this);
   }
   public void mouseClicked(MouseEvent me)
   {
     mouseX=me.getX();
     mouseY=me.getY();
     repaint();
   }
   
    public  void mouseEntered(MouseEvent e) {}  
    public  void mouseExited(MouseEvent e){}  
    public  void mousePressed(MouseEvent e){}  
    public  void mouseReleased(MouseEvent e){}  
    public  void mouseMoved(MouseEvent e){}

    
   public void mouseDragged(MouseEvent me)
   {
     mouseX=me.getX();
     mouseY=me.getY();
     msg="*";
     showStatus("Dragging mouse at "+mouseX+" "+mouseY);
     repaint();
   }
   public void paint (Graphics g)
   {
     g.drawString(msg,mouseX,mouseY);
   }
}
