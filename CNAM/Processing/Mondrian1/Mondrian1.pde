size(400,500);
smooth();

stroke(0);
strokeWeight(10);
strokeCap(SQUARE);

background(255);

fill(255,0,0);
rect(100,0,300,300);

fill(0,0,255);
rect(0,300,100,200);

fill(255,255,0);
rect(300,400,100,100);

line(300,300,300,400);

line(0,100,100,100);

noFill();
rect(0,0,400,500);

save("mondrian.png");