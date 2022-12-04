#include<stdio.h>
int main(){
int cont, num, a=1, b, auxiliar;
cont=0;
printf(" Digite o numero desejado" );
scanf("%d",&num);

for(cont=0;cont<30;cont++){


auxiliar = a + b;
 a = b; 
b = auxiliar;




printf("%i",b);

if(b>0){ 
printf("+");

}


}
}