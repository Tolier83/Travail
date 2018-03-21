phi = linspace(0,2*pi,100000);
tic
for i= 1:length(phi),
  sinphi(i) = sin(phi(i));
end;
toc