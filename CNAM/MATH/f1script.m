x=0;
y=f(x)

x=[-2:0.5:2];
y=f(x)
plot(x,y)

y1=feval('f',x)
fplot('f',[-2,2])

y2=feval(@f,x)
fplot(@f,[-2,2])
