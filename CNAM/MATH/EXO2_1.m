function [y]=naive(P,x)
  [l,c]=size(P);
  V = ones(l,l);
  V(:,2:l) = P(:,1).^(1:l-1);
  alpha = V\P(:,2);
  y=zeros(size(x));
  for i=1:l
    y+=alpha(i)*x.^(i-1);
  end
end