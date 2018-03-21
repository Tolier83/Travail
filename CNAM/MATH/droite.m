function [Int] = droite(a,b,f,m)
  h = (b-a)/m;
  x = [a:h:b];
  y = f(x);
  Int = h*sum( y(2:end) );
end