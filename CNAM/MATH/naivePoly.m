function [alpha]=naivePoly(P)
  [l,c]=size(P);
  V = ones(l,l);
  V(:,2:l) = P(:,1).^(1:l-1);
  alpha = V\P(:,2);
end