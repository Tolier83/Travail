function [y]=naive(P,x)
  [l,c]=size(P);
  V = ones(l,l);
  
  for j=1:l
    V(:,j) = P(:,1).^(j-1);
  end
  alpha = V\P(:,2);
  
  y=zeros(size(x));
  for i=1:l
    y+=alpha(i)*x.^(i-1);
  end
  
end 
