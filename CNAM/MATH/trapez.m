function [Int]=trapez(a,b,f,m)
  h=(b-a)/m;
  x=[a:h:b];
  y=f(x);
  Int=0.5*h*( y(1)+2*sum(y(2:end-1))+y(end) );
end