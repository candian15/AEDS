#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{

    printf("\n Dias vividos\n\n");


bool erro;
int idade;

do{
printf("\n Digite sua idade: ");
scanf("%i", &idade);
erro = idade<0 || idade > 150;
if(erro) puts("\n\a valor invalido!");


  }  while(erro);

int diasvividos = idade*365;
printf("\n voce viveu %i dias", diasvividos);
    return 0;
} //fim main()
