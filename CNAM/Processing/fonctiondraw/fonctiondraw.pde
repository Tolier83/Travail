void setup(){
  size(600,600);
  noFill();
  stroke(0);
  background(200);
  frameRate(25);
}

void draw(){
  
 float x=random(0,width);
 float y=random(0,height);
 rect(x,y,50,50);
}