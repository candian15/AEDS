#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    puts("\n media dos valores");
    bool erro;
    int N;
    do{
        printf("\n digite qntd: ");
        scanf("%i", &N);
        erro= N<1;
        if(erro) puts("\n\a valor invalido");

    }while(erro);
     int i;
    float x, soma = 0;
     for( i = 0; i < N; i++)
    {
        printf("\n digite o valor: ");
        scanf("%f" , &x );
        soma = soma + x;


    }//fim for
    float media = soma/N;
    printf("\n media:%.f",media);
    return 0;
}
