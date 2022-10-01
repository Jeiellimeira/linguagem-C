#include <stdio.h>


int main()
{
int cont;

float nota, total, media;

total=0;

for(cont=1;cont<=4;cont++){
    printf("insira as notas");
    scanf("%f",&nota);
    total=total+nota;
}



media = total/4;



printf("\n a media do aluno e %0.2f", media);

    return 0;
}
