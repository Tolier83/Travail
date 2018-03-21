figure(1)
x=[-2:0.5:2];

subplot(2,3,2)
plot(x,x,'r-',x,exp(x),'b*-')
legend(['y=x';'y=e^x'])

subplot(2,3,4)
plot(x,x.^2)
title('y=x^2')

subplot(2,3,5)
plot(x,x.^3)
xlabel('Axe x')

subplot(2,3,6)
plot(x,sqrt(x))

figure(2)
x=linspace(0.1,exp(2),100);
plot(x,log(x));