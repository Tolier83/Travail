function [y] = lagrange(P,x)
  [l,c]=size(P);
  y=zeros(size(x));
  for i=1:l  
    Li = ones(size(x));
    for j=[1:i-1, i+1:l]
      Li.*=(x-P(j,1))/(P(i,1)-P(j,1));
    end
    y += P(i,2)*Li;
  end
plot(x,y);
end
%P=[-2 4; 0 0; 1 1];
%y=lagrange(P,[-1 0 2])