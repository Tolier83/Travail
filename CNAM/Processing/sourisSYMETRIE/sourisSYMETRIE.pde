void setup(){
  size(600,600);
  smooth();
  background(200);
  noCursor();
  fill(0);
  noStroke();
}

void draw(){
  
 int x=mouseX;
 int y=mouseY;
 ellipse(x,y,20,20);
 ellipse(width-x,y,20,20);
}