#include <stdio.h>
int main(){

float produto,vp, total;

printf("digite o valor do produto: ");
scanf("%f%",&produto);
printf("Digite o valor do pagamento: ");
scanf("%f",&vp);

total= vp-produto;

printf("o troco é  R$ %0.2f",total);

if(total==0){
printf(" não tem troco.");
}

if(total<=-1){
printf("falta dinheiro do cliente.");
}
}


    