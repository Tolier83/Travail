Button b1,b2;

void setup(){
  size(200,200);
  smooth();
  b1 = new Button(50,50,false);
  b2 = new Button(50,130,true);
}

void draw(){
  background(200);
  b2.display();
  b1.display();
}

void mouseMoved(){
 b1.rollover(mouseX,mouseY);
 b2.rollover(mouseX,mouseY);
}

void mousePressed(){
  b1.clic(mouseX,mouseY);
  b2.clic(mouseX,mouseY);
}