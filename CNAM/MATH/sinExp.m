N = 100;
h = 1/N;
x = 0:h:5;
y = sin(2*pi*x).*exp(-x);
axis([-0.5 1.5 -1.2 1.2])
plot(x, y, x, exp(-x), x, -exp(-x))
grid
