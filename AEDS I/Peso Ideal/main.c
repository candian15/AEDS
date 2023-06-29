#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{

    printf("\n peso ideal\n\n");


bool erro;
char sexo;

do{
printf("\n Sexo [M/F]: ");
scanf(" %c", &sexo);
sexo = toupper(sexo);
erro = sexo!='M' && sexo!='F';
if(erro) puts("\n\a resposta imprevista!");


  }  while(erro);

  float altura;
  do{
        printf("\n digite sua altura: [0..2.5]: ");
        scanf(" %f", &altura);
        erro = altura < 0 || altura > 2.5;
        if(erro) puts("\n\a valor invalido");
  }while(erro);

  float pesoideal;
  if(sexo =='M')pesoideal = 72.7*altura-58;
  else       pesoideal = 62.1*altura-44.7;
  printf("\n peso ideal = %f", pesoideal);

    return 0;
} //fim main()
