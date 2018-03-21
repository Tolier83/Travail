int x,y;
boolean rollover, selected;

void setup(){
  size(200,200);
  x= 50;
  y= 50;
  rollover = false;
  selected = false;
  
}

void draw(){
  background(200);
  stroke(0);
  noFill();
  if(rollover) strokeWeight(4); else strokeWeight(1);
  rect(x,y,30,30);
  if(selected){
    noStroke();
    fill(0);
    rect(x+10,y+10,10,10);
  }
}

void mouseMoved(){
 
  int mx = mouseX;
  int my = mouseY;
  if( mx > x && mx < x+30 && my > y && my < y+30 )
    rollover = true;
  else
    rollover = false;
}

void mousePressed(){
  if(rollover)
    selected = ! selected;
  
}