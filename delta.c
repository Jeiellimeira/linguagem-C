#include <stdio.h>
#include <math.h>


int main(){
 int a, b, c;
float  delta, x1, x2;

printf("insira o coeficiente a:");
scanf ("%i",&a);
printf("Digite o coeficiente b: ");
scanf("%i",&b);
printf("Digite o coeficiente c: ");
scanf("%i",&c);

delta = pow(b,2) - 4*a*b;

if (delta >=0) {
x1 = (-b+sqrt(delta))/2*a;
x2 = (-b-sqrt(delta))/2*c;
}
printf("Delta = %.3f\n", delta);
if (delta >0) {
printf("x1=%.3f\n x2= %.3f\n",x1,x2);
}
else if (delta ==0)
printf("x1= x2= %.3f\n", x1);
else if (delta<0)
printf("não existe raízes reais /n");

}