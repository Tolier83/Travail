size(600,600);
rectMode(CENTER);
ellipseMode(CENTER);

smooth();
noStroke();

for(int x=30; x<600; x+=60){
  for(int y=30; y<600; y+=60){
    fill(random(0,255));
    rect(x,y,60,60);
    fill(random(0,255));
    ellipse(x,y,50,50);
  }
}
save("leparc.png");