function [Int] = gauche(a,b,f,m)
  h = (b-a)/m;
  x = [a:h:b];
  y = f(x);
  Int = h*sum( y(1:end-1) );
end
  