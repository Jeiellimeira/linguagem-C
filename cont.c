#include <stdio.h>

int main()
{
    int num, soma=0;
    int cont=0,contP=0;
    for(int i=0;i<10;i++){
        printf("Digite um numero: ");
        scanf("%d", &num);
        soma = soma+num;
        if(num>0){
            contP++;
        }else{
            cont++;
    }

    }
    printf("Media: %d \n", soma/10);
    printf("Contagem de numeros impares: %d \n", cont
    );
    printf("Contagem de numeros pares: %d \n", contP);
    printf("Percentual dos numeros pares: %d \n Percentual dos numeros impares: %d", contP*10,cont*10);

}