function [y]=newton(P,x)
  [l,c]=size(P);
  % calcul des coefficients beta(i)=A(i,i)
  A=zeros(l);
  A(:,1)=P(:,2);
  for j=2:l
    A(j:l,j)=(A(j:l,j-1)-A(j-1:l-1,j-1))./(P(j:l,1)-P(1:l-j+1,1));
  end
  % evaluation des polynomes omega(i) en x et calcul de p(x)
  omegai=ones(size(x));
  y=A(1,1)*omegai;
  for i=2:l
    omegai=omegai.*(x-P(i-1,1));
    y=y+A(i,i)*omegai;
  end
end