class Button
{
  float x,y;
  boolean rollover = false;
  boolean selected = false;
  
  Button(float Px, float Py, boolean Pselected)
  {
    x=Px;
    y=Py;
    selected = Pselected;
  }
 
 void display()
 {
    stroke(0);
    noFill();
    if(rollover) strokeWeight(4); 
    else strokeWeight(1);
    rect(x,y,30,30);
    if(selected)
    {
      noStroke();
      fill(0);
      rect(x+10,y+10,10,10);
    }
 }
 
 void rollover(int mx, int my)
 {
   if( mx > x && mx < x+30 && my > y && my < y+30 )
    rollover = true;
  else
    rollover = false;
 }
 
 
 void clic(int mx; int my)
 {
    if(rollover) selected = ! selected; 
 }
}