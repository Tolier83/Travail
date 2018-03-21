size(600,600);
smooth();

background(250);

fill(0,0,128,30);

for (int i=0; i<2000; i++) {
  
 float x=random(0,600);
 float y=random(0,600);
  
  ellipse(x,y,60,60);
  
}

save("generatif1_les_cercles.png");